#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCNazoPlayableLoopLSALoopTileData.h"
#include "RCNazoPlayableLoopLSATileData.h"
#include "RCNazoPlayableLoopLSALevelData.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoPlayableLoopLSALevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoPlayableLoopLSATileData StartTileData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCNazoPlayableLoopLSALoopTileData> LoopTileDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoPlayableLoopLSATileData EndTileData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LoopTileStartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LoopTileEndLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AllLoopTileDistanceVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoopTileHeadIndex;
    
    RC_API FRCNazoPlayableLoopLSALevelData();
};

