#pragma once
#include "CoreMinimal.h"
#include "RCVariableSelectAlreadyInfo.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCVariableSelectAlreadyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SceneID;
    
    FRCVariableSelectAlreadyInfo();
};

