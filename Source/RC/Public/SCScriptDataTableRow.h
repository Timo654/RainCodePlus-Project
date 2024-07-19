#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SCScriptDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FSCScriptDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScriptLineNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CommandName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ParameterList;
    
    RC_API FSCScriptDataTableRow();
};

