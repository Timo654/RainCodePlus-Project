#pragma once
#include "CoreMinimal.h"
#include "RCCharacterMotionMasterBasicContent.h"
#include "RCCharacterMasterBasicContentMotionName.generated.h"

USTRUCT(BlueprintType)
struct FRCCharacterMasterBasicContentMotionName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCCharacterMotionMasterBasicContent> MasterBasicContent;
    
    RC_API FRCCharacterMasterBasicContentMotionName();
};

