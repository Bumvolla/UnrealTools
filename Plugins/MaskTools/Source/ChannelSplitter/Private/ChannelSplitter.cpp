// Copyright (c) 2025 Sora Mas \n All rights reserved. 

#include "ChannelSplitter.h"
#include "Logging.h"

#include "Modules/ModuleManager.h"

#define LOCTEXT_NAMESPACE "FChannelSplitter"

void FChannelSplitter::StartupModule()
{
}

void FChannelSplitter::ShutdownModule()
{
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FChannelSplitter, ChannelSplitter);