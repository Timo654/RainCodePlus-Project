#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "ERCInputButtonType.h"
#include "ERCInputCursolInfoType.h"
#include "ERCInputHardwareType.h"
#include "ERCInputKeyType.h"
#include "ERCInputMode.h"
#include "ERCInputPlatform.h"
#include "RCInputBFL.generated.h"

UCLASS(Blueprintable)
class RC_API URCInputBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCInputBFL();

    UFUNCTION(BlueprintCallable)
    static void SetPressedDebug(ERCInputKeyType KyeType);
    
    UFUNCTION(BlueprintCallable)
    static void ResetInputMode();
    
    UFUNCTION(BlueprintCallable)
    static void PushInputMode(ERCInputMode InInputMode, FName InModeName);
    
    UFUNCTION(BlueprintCallable)
    static void PopInputMode(FName InModeName, bool InAllPop);
    
    UFUNCTION(BlueprintCallable)
    static bool IsRepeat(ERCInputKeyType KyeType);
    
    UFUNCTION(BlueprintCallable)
    static bool IsReleased(ERCInputKeyType KyeType);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPressed(ERCInputKeyType KyeType);
    
    UFUNCTION(BlueprintCallable)
    static bool IsMove(ERCInputKeyType KyeType);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDown(ERCInputKeyType KyeType);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDebugMenuTrigger();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDebugGameTimeUp();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDebugGameClear();
    
    UFUNCTION(BlueprintCallable)
    static float GetPointerValue(ERCInputKeyType KyeType);
    
    UFUNCTION(BlueprintCallable)
    static float GetPlayerMoveSide();
    
    UFUNCTION(BlueprintCallable)
    static float GetPlayerMoveFront();
    
    UFUNCTION(BlueprintCallable)
    static float GetLeverValue(ERCInputKeyType KyeType);
    
    UFUNCTION(BlueprintCallable)
    static bool GetKey(FKey& OutKey, ERCInputButtonType OutKyeType, ERCInputKeyType KyeType, ERCInputHardwareType InInputHardwareType);
    
    UFUNCTION(BlueprintCallable)
    static ERCInputPlatform GetInputPlatform();
    
    UFUNCTION(BlueprintCallable)
    static bool GetFinaleCursolPointerInfo(ERCInputCursolInfoType& OutInputType, FVector2D& OutScreenPosition, FVector2D& OutMove);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDrawKey(FKey& OutKey, ERCInputButtonType OutKyeType, ERCInputKeyType KyeType);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCursolPointerInfo(ERCInputCursolInfoType& OutInputType, FVector2D& OutScreenPosition, FVector2D& OutMove, bool bInSurvey);
    
    UFUNCTION(BlueprintCallable)
    static float GetCameraMoveZoon();
    
    UFUNCTION(BlueprintCallable)
    static float GetCameraMoveYaw(bool bInSurvey);
    
    UFUNCTION(BlueprintCallable)
    static float GetCameraMovePitch(bool bInSurvey);
    
    UFUNCTION(BlueprintCallable)
    static float GetAmatanMoveTurn();
    
    UFUNCTION(BlueprintCallable)
    static float GetAmatanMoveFront();
    
    UFUNCTION(BlueprintCallable)
    static void ChangeInputMode(ERCInputMode InInputMode, FName InModeName);
    
};

