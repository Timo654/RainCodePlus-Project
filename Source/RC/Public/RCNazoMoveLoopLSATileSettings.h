#pragma once
#include "CoreMinimal.h"
#include "RCNazoMoveLoopLSATileSettings.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoMoveLoopLSATileSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ActorTagArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TileNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    RC_API FRCNazoMoveLoopLSATileSettings();
};

