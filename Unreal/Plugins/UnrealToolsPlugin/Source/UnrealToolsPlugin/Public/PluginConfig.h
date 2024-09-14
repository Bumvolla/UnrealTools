// PluginConfig.h

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PluginConfig.generated.h"

/**
 * UPluginConfig is a class to store and manage plugin settings.
 */
UCLASS(config = Editor, defaultconfig)
class UNREALTOOLSPLUGIN_API UPluginConfig : public UObject
{
	GENERATED_BODY()

public:
	UPluginConfig();

	/** Path where thumbnails should be saved, defualt is: /Game/GeneratedThumbnails */
	UPROPERTY(EditAnywhere, config, Category = "Thumbnail to Texture", meta = (RelativeToGameContentDir))
	FDirectoryPath SavePath;
};
