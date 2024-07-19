#pragma once
#include "CoreMinimal.h"
#include "Text3DComponent.h"
#include "RCText3DComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RC_API URCText3DComponent : public USceneComponent {
    GENERATED_BODY()
public:
    URCText3DComponent(const FObjectInitializer& ObjectInitializer);

};

