#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Text3D -ObjectName=Text3DMeshedComponent -FallbackName=Text3DMeshedComponent
#include "RCText3DMeshedComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RC_API URCText3DMeshedComponent : public USceneComponent {
    GENERATED_BODY()
public:
    URCText3DMeshedComponent(const FObjectInitializer& ObjectInitializer);

};

