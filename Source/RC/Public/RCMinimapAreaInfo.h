#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCMinimapAreaInfo.generated.h"

USTRUCT(BlueprintType)
struct FRCMinimapAreaInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    RC_API FRCMinimapAreaInfo();
};

