#pragma once
#include "CoreMinimal.h"
#include "ERCNzUiBattleKaiKagiListStatus.h"
#include "RCNzUiBattleKaiKagiList_NotifyDelegate.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiBattleKaiKagiList.generated.h"

class URCNzUiBattleKaiKagiListBar;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiBattleKaiKagiList : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<URCNzUiBattleKaiKagiListBar*> KaiKagiListBarArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KaiKagiListFinishTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KaiKagiListBarWaitTime;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNzUiBattleKaiKagiList_Notify OnClosed;
    
    URCNzUiBattleKaiKagiList();
    bool bChangeSpeed;
    UFUNCTION(BlueprintCallable)
    void UninitializeBattleKaiKagiList();
    
    UFUNCTION(BlueprintCallable)
    void Open(TArray<FName> InKaiKagiNameIDArray);
    
    UFUNCTION(BlueprintCallable)
    void InitializeBattleKaiKagiList();
    
    UFUNCTION(BlueprintCallable)
    ERCNzUiBattleKaiKagiListStatus GetBattleKaiKagiListStatus();
    
};

