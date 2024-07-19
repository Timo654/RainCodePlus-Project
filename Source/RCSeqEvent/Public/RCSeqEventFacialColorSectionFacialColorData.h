#pragma once
#include "CoreMinimal.h"
#include "RCSeqEventFacialColorSectionFacialColorData.generated.h"

USTRUCT(BlueprintType)
struct FRCSeqEventFacialColorSectionFacialColorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ColorPatternName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeTime;
    
    RCSEQEVENT_API FRCSeqEventFacialColorSectionFacialColorData();
};

