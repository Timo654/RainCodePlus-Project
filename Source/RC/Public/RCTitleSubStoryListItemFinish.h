#pragma once
#include "CoreMinimal.h"
#include "RCTitleSubStoryListItemBase.h"
#include "RCTitleSubStoryListItemFinish.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCTitleSubStoryListItemFinish : public URCTitleSubStoryListItemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* dlIcon;
    
public:
    URCTitleSubStoryListItemFinish();

};

