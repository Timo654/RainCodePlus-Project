#pragma once
#include "CoreMinimal.h"
#include "ERCOptionUIControlMode.generated.h"

UENUM(BlueprintType)
enum class ERCOptionUIControlMode : uint8 {
    Root,
    ForceClose,
    Tab,
    ConfirmScreen,
    Confirm,
    KeyGenericWindow,
    InitializeConfirm,
    StartNotChangeable,
    NotChangeableWindow,
    ReturnTab,
    ListBar,
    Bar,
    Bar_Choise,
    KeyList,
    KeySetting,
    Initialize,
    Controller,
    Max,
};

