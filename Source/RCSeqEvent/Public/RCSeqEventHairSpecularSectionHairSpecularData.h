#pragma once
#include "CoreMinimal.h"
#include "RCSeqEventHairSpecularSectionHairSpecularData.generated.h"

USTRUCT(BlueprintType)
struct FRCSeqEventHairSpecularSectionHairSpecularData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EventHairSpecularDirectionX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EventHairSpecularDirectionY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EventHairSpecularDirectionZ;
    
    RCSEQEVENT_API FRCSeqEventHairSpecularSectionHairSpecularData();
};

