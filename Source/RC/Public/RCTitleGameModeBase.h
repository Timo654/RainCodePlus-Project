#pragma once
#include "CoreMinimal.h"
#include "RCMenuGameModeBase.h"
#include "RCTitleGameModeBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class RC_API ARCTitleGameModeBase : public ARCMenuGameModeBase {
    GENERATED_BODY()
public:
    ARCTitleGameModeBase(const FObjectInitializer& ObjectInitializer);

};

