#pragma once
#include "CoreMinimal.h"
#include "LoadData.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct FLoadData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SoundId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* pSoundCue;
    
    RC_API FLoadData();
};

