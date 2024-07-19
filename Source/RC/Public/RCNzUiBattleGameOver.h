#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "ERCNzUiBattleGameOverStatus.h"
#include "RCMenuManager.h"
#include "RCNzUiBattleGameOver.generated.h"

class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiBattleGameOver : public URCMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectIndex;
    
public:
    URCNzUiBattleGameOver();

    UFUNCTION(BlueprintCallable)
    UWidget* UpAndDown(EUINavigation InNavigation);
    
    UFUNCTION(BlueprintCallable)
    bool SelectStart(int32 InSelectIndex);
    
    UFUNCTION(BlueprintCallable)
    bool Select(int32 InSelectIndex);
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void InitializeBattleGameOver();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectIndex();
    
    UFUNCTION(BlueprintCallable)
    ERCNzUiBattleGameOverStatus GetBattleGameOverStatus();
    
    UFUNCTION(BlueprintCallable)
    void Decide();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

