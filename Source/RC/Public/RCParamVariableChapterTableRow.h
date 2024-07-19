#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamVariableChapterTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamVariableChapterTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Chapter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VariableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitValue;
    
    RC_API FRCParamVariableChapterTableRow();
};

