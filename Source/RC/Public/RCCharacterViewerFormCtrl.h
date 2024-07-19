#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RCCharacterViewerFormCtrl.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RC_API URCCharacterViewerFormCtrl : public UActorComponent {
    GENERATED_BODY()
public:
    URCCharacterViewerFormCtrl(const FObjectInitializer& ObjectInitializer);

};

