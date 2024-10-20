# UnrealQuickStart
Unreal Engine C++ Quickstart Template

## Building Project with dll
```
& "C:\Program Files\Epic Games\UE_5.4\Engine\Build\BatchFiles\Build.bat" UnrealQuickStartEditor Win64 Development "$PATH TO PROJECT$\UnrealQuickStart\UnrealQuickStart.uproject" -waitmutex -NoHotReload
```

## Open Project in editor
```
& "C:\Program Files\Epic Games\UE_5.4\Engine\Binaries\Win64\UnrealEditor.exe" "$PATH TO PROJECT$\UnrealQuickStart\UnrealQuickStart.uproject"
```

## Building Project with full executable
```
& "C:\Program Files\Epic Games\UE_5.4\Engine\Build\BatchFiles\Build.bat" UnrealQuickStart Win64 Development "$PATH TO PROJECT$\UnrealQuickStart\UnrealQuickStart.uproject" -waitmutex -NoHotReload
```
