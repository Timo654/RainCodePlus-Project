#pragma once
#include "CoreMinimal.h"
#include "RCParamShinigamiFacialTempleteTableRow.h"
#include "RCShinigamiFacialDataRecord.generated.h"

USTRUCT(BlueprintType)
struct FRCShinigamiFacialDataRecord {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCParamShinigamiFacialTempleteTableRow> Records;
    
public:
    RC_API FRCShinigamiFacialDataRecord();
};

