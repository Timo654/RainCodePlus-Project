#pragma once
#include "CoreMinimal.h"
#include "RCTitleSubStoryListItemBase.h"
#include "RCTitleSubStoryListItemUnFinish.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCTitleSubStoryListItemUnFinish : public URCTitleSubStoryListItemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* dlIcon;
    
public:
    URCTitleSubStoryListItemUnFinish();

};

