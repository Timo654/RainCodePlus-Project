#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RCOptionUIDataAsset.generated.h"

UCLASS(Blueprintable)
class RC_API URCOptionUIDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenConfirmCloseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenConfirmPopupTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlaySampleSEInterval;
    
    URCOptionUIDataAsset();

};

