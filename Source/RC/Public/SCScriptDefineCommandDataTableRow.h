#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SCScriptDefineCommandDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FSCScriptDefineCommandDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CommandNameJp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CommandName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ParameterList;
    
    RC_API FSCScriptDefineCommandDataTableRow();
};

