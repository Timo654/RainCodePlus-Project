#pragma once
#include "CoreMinimal.h"
#include "RCCharacterMotionContent.h"
#include "RCCharacterMotionUniqueContent.generated.h"

USTRUCT(BlueprintType)
struct FRCCharacterMotionUniqueContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MotionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCCharacterMotionContent UniqueContent;
    
    RC_API FRCCharacterMotionUniqueContent();
};

