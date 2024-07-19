#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCNazoLoopLSAFollowerData.h"
#include "RCNazoPlayableLoopLSAFollowerData.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoPlayableLoopLSAFollowerData : public FRCNazoLoopLSAFollowerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlayerPrevLocation;
    
    RC_API FRCNazoPlayableLoopLSAFollowerData();
};

