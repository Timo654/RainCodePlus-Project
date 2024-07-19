#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCCharacterMotionDataTableRecord.h"
#include "RCCharacterMotionDataTable.generated.h"

UCLASS(Blueprintable)
class URCCharacterMotionDataTable : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCCharacterMotionDataTableRecord> Data;
    
    URCCharacterMotionDataTable();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

