#pragma once
#include "CoreMinimal.h"
#include "RCGameModeBase.h"
#include "RCAmatanGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class RC_API ARCAmatanGameMode : public ARCGameModeBase {
    GENERATED_BODY()
public:
    ARCAmatanGameMode(const FObjectInitializer& ObjectInitializer);

};

