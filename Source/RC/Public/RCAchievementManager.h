#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCAchievementCommandInfo.h"
#include "RCAchievementSaveInfo.h"
#include "RCAchievementManager.generated.h"

class URCAchievementInterface;

UCLASS(Blueprintable)
class RC_API URCAchievementManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCAchievementInterface* Achievement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCAchievementCommandInfo> AchievementCommandList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCAchievementSaveInfo> UlockAchievementList;
    
public:
    URCAchievementManager();

};

