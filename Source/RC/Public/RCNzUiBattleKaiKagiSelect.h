#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Types/SlateEnums.h"
#include "ERCNzUiBattleKaiKagiSelectStatus.h"
#include "RCMenuManager.h"
#include "RCNzUiBattleKaiKagiSelect_NotifyIntDelegate.h"
#include "RCParamKaikagiListTableRow.h"
#include "RCNzUiBattleKaiKagiSelect.generated.h"

class URCNzUiBattleKaiKagiSelectBar;
class URCNzUiBattleKaiKagiSelectBar2;
class URCNzUiBattleKaiKagiSelectDecide;
class URCNzUiBattleKaiKagiSelectDetail;
class URCNzUiBattleKaiKagiSelectParts;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiBattleKaiKagiSelect : public URCMenuManager {
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
    bool bKaiKagiSelectBar2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URCNzUiBattleKaiKagiSelectBar*> KaiKagiBarArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URCNzUiBattleKaiKagiSelectBar2*> KaiKagiBar2Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URCNzUiBattleKaiKagiSelectParts*> KaiKagiArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiBattleKaiKagiSelectDecide* WBP_NzKaikagi_BTNGuideDecision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiBattleKaiKagiSelectDetail* WBP_NzKaikagiDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReverseInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReverseNextAndPrev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChoiceNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PriorityUseChoiceNoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PriorityTextChoiceNoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> UseChoiceNoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectChoiceNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TextChoiceNoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectChoiceIndexInTextChoiceNoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath KaiKagiDataTablePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKaiKagiDataLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCParamKaikagiListTableRow> KaiKagiDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> OriginalKaiKagiIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> KaikagiIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSoftObjectPath> LoadImagePathMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadingImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMenuEnableAtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoopEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPauseEnable;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNzUiBattleKaiKagiSelect_NotifyInt OnDecide;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNzUiBattleKaiKagiSelect_NotifyInt OnClosed;
    
    URCNzUiBattleKaiKagiSelect();

    UFUNCTION(BlueprintCallable)
    UWidget* UpAndDown(EUINavigation InNavigation);
    
    UFUNCTION(BlueprintCallable)
    void UninitializeBattleKaiKagiSelect();
    
    UFUNCTION(BlueprintCallable)
    bool SelectKaiKagi(int32 InSelectIndex, bool bStart);
    
    UFUNCTION(BlueprintCallable)
    void SelectDeteil();
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    bool KaiKagiSelectStart2(TArray<FName> InKaiKagiIDArray, TArray<FName> InDeleteKaiKagiIDArray, int32 InSelectIndex);
    
    UFUNCTION(BlueprintCallable)
    bool KaiKagiSelectStart(TArray<FName> InKaiKagiIDArray, int32 InSelectIndex);
    
    UFUNCTION(BlueprintCallable)
    void InitializeBattleKaiKagiSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectIndex();
    
    UFUNCTION(BlueprintCallable)
    ERCNzUiBattleKaiKagiSelectStatus GetBattleKaiKagiSelectStatus();
    
    UFUNCTION(BlueprintCallable)
    void Decide();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

