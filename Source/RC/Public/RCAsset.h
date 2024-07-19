#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCAsset.generated.h"

UCLASS(Blueprintable)
class RC_API URCAsset : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* AssetObject;
    
public:
    URCAsset();

    UFUNCTION(BlueprintCallable)
    void ExecAssetLoadFinishChecker();
    
};

