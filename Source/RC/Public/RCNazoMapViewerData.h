#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCNazoMapViewerData.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FRCNazoMapViewerData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MapList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> MapLevelListArray;
    
    RC_API FRCNazoMapViewerData();
};

