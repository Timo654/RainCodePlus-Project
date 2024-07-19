#pragma once
#include "CoreMinimal.h"
#include "RCNazoLoopLSAPlayerData.h"
#include "RCNazoPlayableLoopLSAPlayerData.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoPlayableLoopLSAPlayerData : public FRCNazoLoopLSAPlayerData {
    GENERATED_BODY()
public:
    RC_API FRCNazoPlayableLoopLSAPlayerData();
};

