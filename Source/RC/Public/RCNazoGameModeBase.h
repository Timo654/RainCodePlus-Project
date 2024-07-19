#pragma once
#include "CoreMinimal.h"
#include "RCGameModeBase.h"
#include "RCNazoGameModeBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class RC_API ARCNazoGameModeBase : public ARCGameModeBase {
    GENERATED_BODY()
public:
    ARCNazoGameModeBase(const FObjectInitializer& ObjectInitializer);

};

