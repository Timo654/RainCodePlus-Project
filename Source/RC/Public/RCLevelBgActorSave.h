#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCLevelBgActorSave.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCLevelBgActorSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    FRCLevelBgActorSave();
};

