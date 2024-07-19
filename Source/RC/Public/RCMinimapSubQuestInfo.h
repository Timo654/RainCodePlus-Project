#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCMinimapSubQuestInfo.generated.h"

USTRUCT(BlueprintType)
struct FRCMinimapSubQuestInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RequesterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    RC_API FRCMinimapSubQuestInfo();
};

