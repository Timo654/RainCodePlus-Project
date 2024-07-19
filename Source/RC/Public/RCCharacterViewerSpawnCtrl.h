#pragma once
#include "CoreMinimal.h"
#include "SpDebugModelViewerSpawnCtrlComponent.h"
#include "RCCharacterViewerSpawnCtrl.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RC_API URCCharacterViewerSpawnCtrl : public USpDebugModelViewerSpawnCtrlComponent {
    GENERATED_BODY()
public:
    URCCharacterViewerSpawnCtrl(const FObjectInitializer& ObjectInitializer);

};

