#pragma once
#include "CoreMinimal.h"
#include "RCNazoLoopLSACameraData.h"
#include "RCNazoPlayableLoopLSACameraData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FRCNazoPlayableLoopLSACameraData : public FRCNazoLoopLSACameraData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Camera;
    
    RC_API FRCNazoPlayableLoopLSACameraData();
};

