#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamEventMapBusStopInfoTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamEventMapBusStopInfoTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapIDComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CheckActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextPlayerStartName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConnectBusStopStatusIndex;
    
    RC_API FRCParamEventMapBusStopInfoTableRow();
};

