#pragma once
#include "CoreMinimal.h"
#include "RCCharacterProxySortInfo.generated.h"

class URCCharacterProxy;

USTRUCT(BlueprintType)
struct FRCCharacterProxySortInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCCharacterProxy* CharacterProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Length;
    
    RC_API FRCCharacterProxySortInfo();
};

