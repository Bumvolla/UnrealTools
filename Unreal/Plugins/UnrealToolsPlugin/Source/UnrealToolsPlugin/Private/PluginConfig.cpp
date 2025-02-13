// PluginConfig.cpp

#include "PluginConfig.h"
#include "Misc/Paths.h"

UPluginConfig::UPluginConfig()
{
	// Initialize with a default path, or leave it empty if you want it to be set by the user
	SavePath =FDirectoryPath(FPaths::ProjectContentDir() + "GeneratedThumbnails");
}