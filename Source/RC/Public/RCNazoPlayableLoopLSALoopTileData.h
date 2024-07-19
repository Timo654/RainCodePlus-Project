#pragma once
#include "CoreMinimal.h"
#include "RCNazoPlayableLoopLSASequencerData.h"
#include "RCNazoPlayableLoopLSATileData.h"
#include "RCNazoPlayableLoopLSALoopTileData.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoPlayableLoopLSALoopTileData : public FRCNazoPlayableLoopLSATileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FrontWallActorTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoPlayableLoopLSASequencerData FrontWallSequencerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOpenFrontWall;
    
    RC_API FRCNazoPlayableLoopLSALoopTileData();
};

