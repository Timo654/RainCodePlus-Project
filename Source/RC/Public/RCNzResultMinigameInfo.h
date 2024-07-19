#pragma once
#include "CoreMinimal.h"
#include "ERCNazoGameMode.h"
#include "RCNzResultMinigameInfo.generated.h"

USTRUCT(BlueprintType)
struct FRCNzResultMinigameInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Chapter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Scene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCNazoGameMode MinigameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ListNum;
    
    RC_API FRCNzResultMinigameInfo();
};

