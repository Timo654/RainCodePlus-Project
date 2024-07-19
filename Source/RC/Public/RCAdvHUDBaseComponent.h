#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RCAdvHUDBaseComponent.generated.h"

class ARCAdvHUD;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RC_API URCAdvHUDBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCAdvHUD* HUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WidgetPriority;
    
    URCAdvHUDBaseComponent(const FObjectInitializer& ObjectInitializer);

};

