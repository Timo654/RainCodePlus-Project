#pragma once
#include "CoreMinimal.h"
#include "ERCAdvHUDResearchPointerMouse_InputType.h"
#include "ERCAdvHUDResearchPointerMouse_Mode.h"
#include "ERCAdvHUDResearchPointerMouse_ModeOffType.h"
#include "RCAdvHUDResearchPointer_MouseControlData_Marker.h"
#include "RCAdvHUDResearchPointer_MouseControlData_Mouse.h"
#include "RCAdvHUDResearchPointer_MouseControlData_Pointer.h"
#include "RCAdvHUDResearchPointer_MouseControlData.generated.h"

USTRUCT(BlueprintType)
struct FRCAdvHUDResearchPointer_MouseControlData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDResearchPointerMouse_Mode MouseMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAdvHUDResearchPointer_MouseControlData_Mouse Mouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAdvHUDResearchPointer_MouseControlData_Pointer Pointer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAdvHUDResearchPointer_MouseControlData_Marker Marker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDResearchPointerMouse_InputType KeyInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDResearchPointerMouse_ModeOffType ModeOffType;
    
    RC_API FRCAdvHUDResearchPointer_MouseControlData();
};

