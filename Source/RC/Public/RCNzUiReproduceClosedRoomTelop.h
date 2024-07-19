#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiReproduceClosedRoomTelop.generated.h"

class URCReproduceCloseRoomUIDataAsset;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiReproduceClosedRoomTelop : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URCReproduceCloseRoomUIDataAsset* UIDataAsset;
    
public:
    URCNzUiReproduceClosedRoomTelop();

    UFUNCTION(BlueprintCallable)
    void StartTelop(URCReproduceCloseRoomUIDataAsset* DataAsset);
    
    UFUNCTION(BlueprintCallable)
    bool IsFinished();
    bool bChangeSpeed;
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetReproduceClosedRoomTelopPriority();
    
    UFUNCTION(BlueprintCallable)
    void FinishTelop();
    
};

