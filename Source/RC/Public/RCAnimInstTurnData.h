#pragma once
#include "CoreMinimal.h"
#include "RCAnimInstTurnStateData.h"
#include "RCAnimInstTurnData.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCAnimInstTurnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrevTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TurnStateID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAnimInstTurnStateData Turn0StateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAnimInstTurnStateData Turn1StateData;
    
    FRCAnimInstTurnData();
};

