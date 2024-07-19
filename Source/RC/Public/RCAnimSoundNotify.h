#pragma once
#include "CoreMinimal.h"
#include "ERCSoundType.h"
#include "RCAnimNotify.h"
#include "RCAnimSoundNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class RC_API URCAnimSoundNotify : public URCAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCSoundType SoundType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SoundId;
    
public:
    URCAnimSoundNotify();

};

