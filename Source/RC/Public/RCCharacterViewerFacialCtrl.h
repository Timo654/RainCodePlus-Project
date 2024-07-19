#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RCCharacterViewerFacialCtrl.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RC_API URCCharacterViewerFacialCtrl : public UActorComponent {
    GENERATED_BODY()
public:
    URCCharacterViewerFacialCtrl(const FObjectInitializer& ObjectInitializer);

};

