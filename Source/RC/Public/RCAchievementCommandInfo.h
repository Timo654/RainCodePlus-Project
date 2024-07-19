#pragma once
#include "CoreMinimal.h"
#include "ERCAchievementCommand.h"
#include "RCAchievementCommandInfo.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCAchievementCommandInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAchievementCommand Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AchivementID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExec;
    
    FRCAchievementCommandInfo();
};

