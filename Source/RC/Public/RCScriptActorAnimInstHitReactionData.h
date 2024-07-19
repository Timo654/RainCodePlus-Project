#pragma once
#include "CoreMinimal.h"
#include "RCScriptActorHitReactionData.h"
#include "RCScriptActorAnimInstHitReactionData.generated.h"

USTRUCT(BlueprintType)
struct FRCScriptActorAnimInstHitReactionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCScriptActorHitReactionData ScriptActorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Power;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendAlphaTarget;
    
    RC_API FRCScriptActorAnimInstHitReactionData();
};

