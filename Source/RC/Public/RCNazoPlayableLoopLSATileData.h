#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCNazoLoopLSATileData.h"
#include "RCNazoPlayableLoopLSATileData.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoPlayableLoopLSATileData : public FRCNazoLoopLSATileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EndLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DistanceVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceSquare;
    
    RC_API FRCNazoPlayableLoopLSATileData();
};

