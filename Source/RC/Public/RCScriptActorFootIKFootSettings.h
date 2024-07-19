#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCScriptActorFootIKFootSettings.generated.h"

USTRUCT(BlueprintType)
struct FRCScriptActorFootIKFootSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FootBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector IdleLandingLocation;
    
    RC_API FRCScriptActorFootIKFootSettings();
};

