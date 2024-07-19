#pragma once
#include "CoreMinimal.h"
#include "RCActorCollisionPrisetInfo.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FRCActorCollisionPrisetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* PrimitiveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PrisetName;
    
    RC_API FRCActorCollisionPrisetInfo();
};

