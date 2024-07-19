#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCMinimapPlayerInfo.generated.h"

USTRUCT(BlueprintType)
struct FRCMinimapPlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    RC_API FRCMinimapPlayerInfo();
};

