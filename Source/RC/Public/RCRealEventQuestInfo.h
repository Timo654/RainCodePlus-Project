#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCRealEventQuestInfo.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCRealEventQuestInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QuestTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    FRCRealEventQuestInfo();
};

