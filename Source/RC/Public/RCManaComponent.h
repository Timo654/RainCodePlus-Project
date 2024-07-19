#pragma once
#include "CoreMinimal.h"
#include "ManaComponent.h"
#include "RCManaComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RC_API URCManaComponent : public UManaComponent {
    GENERATED_BODY()
public:
    URCManaComponent(const FObjectInitializer& ObjectInitializer);

};

