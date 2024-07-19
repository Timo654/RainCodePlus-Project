#pragma once
#include "CoreMinimal.h"
#include "RCSeqEventEmissiveSectionEmissiveData.generated.h"

USTRUCT(BlueprintType)
struct FRCSeqEventEmissiveSectionEmissiveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EventEmissiveValue;
    
    RCSEQEVENT_API FRCSeqEventEmissiveSectionEmissiveData();
};

