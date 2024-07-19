#pragma once
#include "CoreMinimal.h"
#include "ERCEnvironmentChangeRainType.h"
#include "RCEnvironmentMaterialInfo.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCEnvironmentMaterialInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCEnvironmentChangeRainType RainType;
    
    FRCEnvironmentMaterialInfo();
};

