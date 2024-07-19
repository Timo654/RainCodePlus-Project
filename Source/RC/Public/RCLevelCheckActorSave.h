#pragma once
#include "CoreMinimal.h"
#include "RCLevelCheckActorSave.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCLevelCheckActorSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckFinish;
    
    FRCLevelCheckActorSave();
};

