#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RCDroneAnimCtrl.generated.h"

class URCDroneAnimInstance;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RC_API URCDroneAnimCtrl : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URCDroneAnimInstance*> AnimInstanceArray;
    
public:
    URCDroneAnimCtrl(const FObjectInitializer& ObjectInitializer);

};

