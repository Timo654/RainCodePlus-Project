#pragma once
#include "CoreMinimal.h"
#include "FacialCharaData.generated.h"

class URCCharacterProxy;

USTRUCT(BlueprintType)
struct FFacialCharaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCCharacterProxy* pCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FacialName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowFlowLiquid;
    
    RC_API FFacialCharaData();
};

