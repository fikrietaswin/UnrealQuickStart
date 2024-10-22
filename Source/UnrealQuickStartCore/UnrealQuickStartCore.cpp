// Copyright Epic Games, Inc. All Rights Reserved.

#include "ARQuickStartCore.h"
#include "Modules/ModuleManager.h"

IMPLEMENT_PRIMARY_GAME_MODULE(FDefaultGameModuleImpl, ARQuickStartCore, "ARQuickStartCore");

// Entry point for the AR system
void FARQuickStartCore::StartupModule()
{
    Super::StartupModule();
    
    // Initialize AR session
    InitializeARSession();
}

void FARQuickStartCore::InitializeARSession()
{
    // Set up AR session configuration (e.g., ARCore or ARKit)
    UARSessionConfig* ARConfig = NewObject<UARSessionConfig>();
    ARConfig->SetSessionType(EARSessionType::World);
    ARConfig->bUseSceneDepth = true;
    
    UARBlueprintLibrary::StartARSession(ARConfig);
}
