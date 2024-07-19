#pragma once
#include "CoreMinimal.h"
#include "LipSyncaArgument.generated.h"

USTRUCT(BlueprintType)
struct FLipSyncaArgument {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float lipSyncFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoiceVolume;
    
    RC_API FLipSyncaArgument();
};

