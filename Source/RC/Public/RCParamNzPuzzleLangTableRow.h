#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamNzPuzzleLangTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamNzPuzzleLangTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SceneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LangSceneID;
    
    RC_API FRCParamNzPuzzleLangTableRow();
};

