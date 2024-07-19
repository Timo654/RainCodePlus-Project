#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "RCScriptActorAnimInstFootIKFootData.generated.h"

USTRUCT(BlueprintType)
struct FRCScriptActorAnimInstFootIKFootData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Rot;
    
    RC_API FRCScriptActorAnimInstFootIKFootData();
};

