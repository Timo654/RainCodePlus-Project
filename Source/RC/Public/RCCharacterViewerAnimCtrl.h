#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RCCharacterViewerAnimCtrl.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RC_API URCCharacterViewerAnimCtrl : public UActorComponent {
    GENERATED_BODY()
public:
    URCCharacterViewerAnimCtrl(const FObjectInitializer& ObjectInitializer);

};

