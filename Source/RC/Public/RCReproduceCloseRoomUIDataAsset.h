#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RCReproduceCloseRoomUIDataAsset.generated.h"

UCLASS(Blueprintable)
class RC_API URCReproduceCloseRoomUIDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTime;
    
    URCReproduceCloseRoomUIDataAsset();

};

