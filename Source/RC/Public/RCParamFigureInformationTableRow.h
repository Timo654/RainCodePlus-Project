#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamFigureInformationTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamFigureInformationTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PersonID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FigureImagePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FigureNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FigureHintText;
    
    RC_API FRCParamFigureInformationTableRow();
};

