#pragma once
#include "CoreMinimal.h"
#include "RCNazoMoveLoopLSARandomTileSettings.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoMoveLoopLSARandomTileSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TileID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TileTagArray;
    
    RC_API FRCNazoMoveLoopLSARandomTileSettings();
};

