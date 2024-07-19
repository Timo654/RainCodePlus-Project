#pragma once
#include "CoreMinimal.h"
#include "RCPlayerCharacter.h"
#include "RCNazoPlayerCharacter.generated.h"

UCLASS(Blueprintable)
class RC_API ARCNazoPlayerCharacter : public ARCPlayerCharacter {
    GENERATED_BODY()
public:
    ARCNazoPlayerCharacter(const FObjectInitializer& ObjectInitializer);

};

