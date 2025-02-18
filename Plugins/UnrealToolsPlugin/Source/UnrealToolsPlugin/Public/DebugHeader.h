#pragma once
#include "Misc/MessageDialog.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "Framework/Notifications/NotificationManager.h"

//CORE_API DECLARE_LOG_CATEGORY_EXTERN(ThumbnailToTexture, Log, All);
//CORE_API DECLARE_LOG_CATEGORY_EXTERN(BatchRename, Log, All);

inline void Print(const FString& Message, const FColor& Color)
{
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 8.f, Color, Message);
	}
}

inline void PrintLog(const FString& Message) 
{

	UE_LOG(LogTemp, Warning,TEXT("%s"), *Message)
}

inline void PrintToEditorWindow(const EAppMsgType::Type btn, const FString& Message, const FString& Level)
{
	FText Title = FText::FromString(Level);
	FMessageDialog::Open(btn, FText::FromString(Message), Title);
}

inline void PrintToNotification(const FString& Message,const float duration = 7.f)
{
	FNotificationInfo NotifInfo(FText::FromString(Message));
	NotifInfo.bUseLargeFont = true;
	NotifInfo.FadeOutDuration = duration;

	FSlateNotificationManager::Get().AddNotification(NotifInfo);
}

