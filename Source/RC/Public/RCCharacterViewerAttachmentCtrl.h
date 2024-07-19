#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RCCharacterViewerAttachmentCtrl.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RC_API URCCharacterViewerAttachmentCtrl : public UActorComponent {
    GENERATED_BODY()
public:
    URCCharacterViewerAttachmentCtrl(const FObjectInitializer& ObjectInitializer);

};

