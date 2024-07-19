#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Margin.h"
#include "RCParamNzFinaleSectionTableRow.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiFinaleIndexListWidget.generated.h"

class ARCNzFinaleManagerBase;
class URCNzUiFinaleHeadingTextWidget;
class UTexture2D;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiFinaleIndexListWidget : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* sectionList1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* sectionList2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URCNzUiFinaleHeadingTextWidget*> indexList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 currentSelectIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IndexSizeY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IndexSizeX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IndexMaxNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OneLineIndexMaxNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SectionUIPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isInitialize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCNzFinaleManagerBase* FinaleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isIndexList02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> SectionNumberTexList;
    
public:
    URCNzUiFinaleIndexListWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateSelectIndexWidget(int32 targetIdx);
    
    UFUNCTION(BlueprintCallable)
    void UpdateSectionDetectivePointState(ARCNzFinaleManagerBase* NewFinaleManager);
    
    UFUNCTION(BlueprintCallable)
    void UpdateIndexList(FRCParamNzFinaleSectionTableRow Section, int32 idx, ARCNzFinaleManagerBase* NewFinaleManager);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleSectionList(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void ResetSelectIndexWidget();
    
    UFUNCTION(BlueprintCallable)
    void MovePrevSection();
    
    UFUNCTION(BlueprintCallable)
    void MoveNextSection();
    
    UFUNCTION(BlueprintCallable)
    bool IsExsitTargteIdxSection(int32 targetIdx);
    
    UFUNCTION(BlueprintCallable)
    bool IsExistTargetSectionTextIDIndex(FName TargetID, int32& lastIdx);
    
    UFUNCTION(BlueprintCallable)
    bool IsExistPrevSection();
    
    UFUNCTION(BlueprintCallable)
    bool IsExistNextSection();
    
    UFUNCTION(BlueprintCallable)
    bool IsCurrentSection();
    
    UFUNCTION(BlueprintCallable)
    bool IsCompleteInitialize();
    
    UFUNCTION(BlueprintCallable)
    void InitializeFinaleIndexListWidget();
    
    UFUNCTION(BlueprintCallable)
    FName GetTargetIndexSectionID(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FMargin GetListParentMargin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector2D GetListParentDesiredSize();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsIndex02Flag();
    
    UFUNCTION(BlueprintCallable)
    FMargin GetIndexMargin(int32 idx);
    
    UFUNCTION(BlueprintCallable)
    TArray<URCNzUiFinaleHeadingTextWidget*> GetIndexList();
    
    UFUNCTION(BlueprintCallable)
    FString GetCurrentSelectSetionID();
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentSectionText(int32& SectionIdx, FString& sectionTitle);
    
    UFUNCTION(BlueprintCallable)
    FString GetCurrentSectionPieceUIPath();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurentSelectSectionIndex();
    
    UFUNCTION(BlueprintCallable)
    void DebugShowIndexSection(FVector2D UL, FVector2D ur, FVector2D dl, FVector2D dr, int32 idx);
    
};

