#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AssetInfo.h"
#include "RCAssetManager.generated.h"

class URCAsset;

UCLASS(Blueprintable)
class RC_API URCAssetManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URCAsset*> AssetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAssetInfo> BackupAssetInfo;
    
public:
    URCAssetManager();

};

