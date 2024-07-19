#pragma once
#include "CoreMinimal.h"
#include "RCMenuGameModeBase.h"
#include "RCTitleProtGameModeBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class RC_API ARCTitleProtGameModeBase : public ARCMenuGameModeBase {
    GENERATED_BODY()
public:
    ARCTitleProtGameModeBase(const FObjectInitializer& ObjectInitializer);

};

