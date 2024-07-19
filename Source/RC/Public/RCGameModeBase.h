#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "RCGameModeBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class RC_API ARCGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
    ARCGameModeBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNextLevelName(FName LevelName);
    
};

