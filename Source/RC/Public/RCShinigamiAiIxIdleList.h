#pragma once
#include "CoreMinimal.h"
#include "RCShinigamiAiIxIdleList.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCShinigamiAiIxIdleList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SequenceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Probability;
    
    FRCShinigamiAiIxIdleList();
};

