#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "RC3DWidgetComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RC_API URC3DWidgetComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
    URC3DWidgetComponent(const FObjectInitializer& ObjectInitializer);

};

