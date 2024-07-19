#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "RCMenuManager.h"
#include "RCParamChapterSelectDataTableRow.h"
#include "RCTitleChapterSelectList.generated.h"

class URCTitleChapterSelectListItem;
class USpUIScrollBox;
class UVerticalBox;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCTitleChapterSelectList : public URCMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URCTitleChapterSelectListItem*> widgetListItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URCTitleChapterSelectListItem*> useListItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpUIScrollBox* ScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* verticalListBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 listDispMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 dispTopIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bListLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamChapterSelectDataTableRow> dataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateCaption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float scrollSize;
    
public:
    URCTitleChapterSelectList();

protected:
    UFUNCTION(BlueprintCallable)
    UWidget* ChapterSelectListSelectNavigation(EUINavigation InNavigation);
    
};

