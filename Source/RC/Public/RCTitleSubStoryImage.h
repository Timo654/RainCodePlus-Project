#pragma once
#include "CoreMinimal.h"
#include "RCUiMenuQuestImage.h"
#include "RCTitleSubStoryImage.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCTitleSubStoryImage : public URCUiMenuQuestImage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubStoryChapterID;
    
public:
    URCTitleSubStoryImage();

};

