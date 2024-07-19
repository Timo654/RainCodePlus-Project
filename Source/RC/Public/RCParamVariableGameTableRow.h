#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamVariableGameTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamVariableGameTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VariableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitValue;
    
    RC_API FRCParamVariableGameTableRow();
};

