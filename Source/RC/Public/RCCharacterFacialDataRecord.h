#pragma once
#include "CoreMinimal.h"
#include "RCParamCharacterFacialTempleteTableRow.h"
#include "RCCharacterFacialDataRecord.generated.h"

USTRUCT(BlueprintType)
struct FRCCharacterFacialDataRecord {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCParamCharacterFacialTempleteTableRow> Records;
    
public:
    RC_API FRCCharacterFacialDataRecord();
};

