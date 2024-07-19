#pragma once
#include "CoreMinimal.h"
#include "ERCRealEventActorType.h"
#include "RCEventActorInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FRCEventActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCRealEventActorType ActorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    RC_API FRCEventActorInfo();
};

