#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RCCharacterViewerBlackboard.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RC_API URCCharacterViewerBlackboard : public UActorComponent {
    GENERATED_BODY()
public:
    URCCharacterViewerBlackboard(const FObjectInitializer& ObjectInitializer);

};

