#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCScriptActorAnimInstFootIKFootData.h"
#include "RCScriptActorAnimInstFootIKData.generated.h"

USTRUCT(BlueprintType)
struct FRCScriptActorAnimInstFootIKData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFootIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanFootIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WaistOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCScriptActorAnimInstFootIKFootData FootLData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCScriptActorAnimInstFootIKFootData FootRData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFootIKInterp;
    
    RC_API FRCScriptActorAnimInstFootIKData();
};

