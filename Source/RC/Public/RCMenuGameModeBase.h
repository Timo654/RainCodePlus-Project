#pragma once
#include "CoreMinimal.h"
#include "RCGameModeBase.h"
#include "RCMenuGameModeBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class RC_API ARCMenuGameModeBase : public ARCGameModeBase {
    GENERATED_BODY()
public:
    ARCMenuGameModeBase(const FObjectInitializer& ObjectInitializer);

};

