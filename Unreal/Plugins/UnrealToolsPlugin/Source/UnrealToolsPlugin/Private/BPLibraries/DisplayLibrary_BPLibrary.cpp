
#include "BPLibraries/DisplayLibrary_BPLibrary.h"
#include "UnrealToolsPlugin.h"
#include "GenericPlatform/GenericApplication.h"
#include "Widgets/SWindow.h"
#include "GameFramework/GameUserSettings.h"

UDisplayLibrary_BPLibrary::UDisplayLibrary_BPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

int UDisplayLibrary_BPLibrary::GetDisplayCount()
{
	FDisplayMetrics Displays;
	FDisplayMetrics::RebuildDisplayMetrics(Displays);

	return Displays.MonitorInfo.Num();
}

TArray<FDisplayInfo> UDisplayLibrary_BPLibrary::GetAllDisplays()
{
	TArray<FDisplayInfo> AllDisplays;

	FDisplayMetrics Displays;
	FDisplayMetrics::RebuildDisplayMetrics(Displays);

	for (const FMonitorInfo& Monitor : Displays.MonitorInfo)
	{
		AllDisplays.Add(FDisplayInfo(Monitor.Name, Monitor.ID, Monitor.NativeWidth, Monitor.NativeHeight, Monitor.MaxResolution, Monitor.bIsPrimary, Monitor.DPI));
	}
	return AllDisplays;
}

bool UDisplayLibrary_BPLibrary::SetActiveDisplay(int32 DisplayIndex)
{
	FDisplayMetrics Displays;
	FDisplayMetrics::RebuildDisplayMetrics(Displays);

	if (DisplayIndex > Displays.MonitorInfo.Num())
	{
		//non existing display
		return false;
	}

	const FMonitorInfo TargetMonitor = Displays.MonitorInfo[DisplayIndex];

	// TargetMonitor.WorkArea

	FVector2D WindowPosition(static_cast<float>(TargetMonitor.WorkArea.Left), static_cast<float>(TargetMonitor.WorkArea.Top));

	if (GEngine && GEngine->GameViewport)
	{
		// display switching
		TSharedPtr<SWindow> GWindow = GEngine->GameViewport->GetWindow();
		GWindow->MoveWindowTo(WindowPosition);

		//setting resolution
		UGameUserSettings* UserSettings = GEngine->GameUserSettings;
		UserSettings->SetScreenResolution(FIntPoint(TargetMonitor.NativeWidth, TargetMonitor.NativeHeight));
		UserSettings->ApplyResolutionSettings(false);


	}
	else
	{
		return false;
	}

	//setting resolution

	return true;
}
