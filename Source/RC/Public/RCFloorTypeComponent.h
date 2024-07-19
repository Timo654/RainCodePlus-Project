#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "RCFloorTypeComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RC_API URCFloorTypeComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FloorTypeNumber;
    
public:
    URCFloorTypeComponent(const FObjectInitializer& ObjectInitializer);

};

