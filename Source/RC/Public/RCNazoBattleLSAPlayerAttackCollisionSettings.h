#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCNazoBattleLSAPlayerAttackCollisionSettings.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoBattleLSAPlayerAttackCollisionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform AttachTransform;
    
    RC_API FRCNazoBattleLSAPlayerAttackCollisionSettings();
};

