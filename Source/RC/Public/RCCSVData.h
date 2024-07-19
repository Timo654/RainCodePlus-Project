#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCCSVData.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class RC_API URCCSVData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTablePtr;
    
public:
    URCCSVData();

    UFUNCTION(BlueprintCallable)
    void SetDataTable(UDataTable* pDataTable);
    
};

