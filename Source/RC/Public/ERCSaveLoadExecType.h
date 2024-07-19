#pragma once
#include "CoreMinimal.h"
#include "ERCSaveLoadExecType.generated.h"

UENUM(BlueprintType)
enum class ERCSaveLoadExecType : uint8 {
    None,
    SaveDevelopmentData,
    LoadDevelopmentData,
    SaveSystemData,
    LoadSystemData,
    SaveGameData,
    SaveGameDataFromMemory,
    LoadGameData,
    LastLoadGameData,
    CheckGameData,
    LoadDemoSystemData,
    LoadDemoGameData,
    CheckDemoGameData,
};

