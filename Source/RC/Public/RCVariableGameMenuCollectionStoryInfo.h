#pragma once
#include "CoreMinimal.h"
#include "RCVariableGameMenuStoryInfo.h"
#include "RCVariableGameMenuCollectionStoryInfo.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCVariableGameMenuCollectionStoryInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharacterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCVariableGameMenuStoryInfo> StoryInfoList;
    
    FRCVariableGameMenuCollectionStoryInfo();
};

