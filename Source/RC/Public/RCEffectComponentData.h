#pragma once
#include "CoreMinimal.h"
#include "RCEffectComponentData.generated.h"

USTRUCT(BlueprintType)
struct FRCEffectComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EffectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EffectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EffectManagedID;
    
    RC_API FRCEffectComponentData();
};

