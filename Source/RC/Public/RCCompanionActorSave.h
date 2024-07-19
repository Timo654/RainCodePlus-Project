#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCCompanionActorSave.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCCompanionActorSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Yaw;
    
    FRCCompanionActorSave();
};

