#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "RCMenuManager.h"
#include "RCTItleSubStoryList.generated.h"

class URCTitleSubStoryListItemSwitch;
class USpUIScrollBox;
class UVerticalBox;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCTItleSubStoryList : public URCMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URCTitleSubStoryListItemSwitch*> switchArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URCTitleSubStoryListItemSwitch*> useSwitchArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ChapterIDArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpUIScrollBox* ScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* verticalListBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 dispTopIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bListLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 scrollSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isChangeSelectIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 enableListMax;
    
public:
    URCTItleSubStoryList();

protected:
    UFUNCTION(BlueprintCallable)
    UWidget* SubStoryListSelectNavigation(EUINavigation InNavigation);
    
};

