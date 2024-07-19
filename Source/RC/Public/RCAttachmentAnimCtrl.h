#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ERCAttachAnimType.h"
#include "RCAttachmentAnimCtrl.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RC_API URCAttachmentAnimCtrl : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ERCAttachAnimType AnimationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAttachAnimType CurrentAnimationType;
    
public:
    URCAttachmentAnimCtrl(const FObjectInitializer& ObjectInitializer);

};

