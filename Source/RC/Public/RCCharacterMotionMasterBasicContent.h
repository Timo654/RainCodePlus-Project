#pragma once
#include "CoreMinimal.h"
#include "RCCharacterMotionContent.h"
#include "RCCharacterMotionMasterBasicContent.generated.h"

USTRUCT(BlueprintType)
struct FRCCharacterMotionMasterBasicContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChapterSceneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCCharacterMotionContent MasterBasicContent;
    
    RC_API FRCCharacterMotionMasterBasicContent();
};

