#pragma once
#include "CoreMinimal.h"
#include "ERCVariableType.h"
#include "ARCVariableInfo.generated.h"

USTRUCT(BlueprintType)
struct FARCVariableInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCVariableType VariableType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VariableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VariableValue;
    
    RC_API FARCVariableInfo();
};

