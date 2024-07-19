#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERCAchievementID.h"
#include "ERCAchievementOperationID.h"
#include "RCAchievementBFL.generated.h"

UCLASS(Blueprintable)
class RC_API URCAchievementBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCAchievementBFL();

    UFUNCTION(BlueprintCallable)
    static void UnlockByOperationID(ERCAchievementOperationID InAchievementOperationID, int32 Num);
    
    UFUNCTION(BlueprintCallable)
    static void Unlock(ERCAchievementID InAchievementID);
    
};

