#pragma once
#include "CoreMinimal.h"
#include "RCAdvHUDAccessableCheckActorData.generated.h"

class ARCCheckActor;

USTRUCT(BlueprintType)
struct FRCAdvHUDAccessableCheckActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCCheckActor* CheckActor;
    
    RC_API FRCAdvHUDAccessableCheckActorData();
};

