#pragma once
#include "CoreMinimal.h"
#include "RCNazoTileLevelSettingsBG.h"
#include "RCNazoTileSettingsBG.h"
#include "RCNazoTileData.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoTileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoTileSettingsBG TileSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoTileLevelSettingsBG TileLevelSettings;
    
    RC_API FRCNazoTileData();
};

