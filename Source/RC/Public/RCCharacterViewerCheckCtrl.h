#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RCCharacterViewerCheckCtrl.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RC_API URCCharacterViewerCheckCtrl : public UActorComponent {
    GENERATED_BODY()
public:
    URCCharacterViewerCheckCtrl(const FObjectInitializer& ObjectInitializer);

};

