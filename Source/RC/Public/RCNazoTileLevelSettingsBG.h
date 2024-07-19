#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCNazoTileLevelSettingsBG.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoTileLevelSettingsBG : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TileID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelFolderPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> LevelNameArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TileActorTagArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FrontWallActorTag;
    
    RC_API FRCNazoTileLevelSettingsBG();
};

