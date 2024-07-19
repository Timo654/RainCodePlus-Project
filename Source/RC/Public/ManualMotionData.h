#pragma once
#include "CoreMinimal.h"
#include "ManualMotionData.generated.h"

class URCCharacterProxy;

USTRUCT(BlueprintType)
struct FManualMotionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCCharacterProxy* pCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VoiceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FacialName;
    
    RC_API FManualMotionData();
};

