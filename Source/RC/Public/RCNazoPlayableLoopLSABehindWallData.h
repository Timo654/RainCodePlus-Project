#pragma once
#include "CoreMinimal.h"
#include "RCNazoPlayableLoopLSASequencerData.h"
#include "RCNazoPlayableLoopLSABehindWallData.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoPlayableLoopLSABehindWallData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCNazoPlayableLoopLSASequencerData> SequencerDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentSequencerIndex;
    
    RC_API FRCNazoPlayableLoopLSABehindWallData();
};

