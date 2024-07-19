#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "RCMoveChunkPrimaryAssetLabel.generated.h"

UCLASS(Blueprintable)
class RC_API URCMoveChunkPrimaryAssetLabel : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> AssetPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChunkId;
    
    URCMoveChunkPrimaryAssetLabel();

};

