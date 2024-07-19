#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RCCharacterViewerDressUp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RC_API URCCharacterViewerDressUp : public UActorComponent {
    GENERATED_BODY()
public:
    URCCharacterViewerDressUp(const FObjectInitializer& ObjectInitializer);

};

