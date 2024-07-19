#pragma once
#include "CoreMinimal.h"
#include "ERCNzUiBattleKaiKagiSelectPartsAnimType.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiBattleKaiKagiSelectParts.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiBattleKaiKagiSelectParts : public URCUiWidgetBase {
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
    UWidgetAnimation* AN_Next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Prev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> AnimArray;
    
public:
    URCNzUiBattleKaiKagiSelectParts();

    UFUNCTION(BlueprintCallable)
    void PlayAnim(ERCNzUiBattleKaiKagiSelectPartsAnimType AnimType);
    
    UFUNCTION(BlueprintCallable)
    void InitializeBattleKaiKagiSelectParts();
    
};

