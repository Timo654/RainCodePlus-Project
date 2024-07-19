#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RCSequenceFollowTarget.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class RC_API ARCSequenceFollowTarget : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* FollowActor;
    
public:
    ARCSequenceFollowTarget(const FObjectInitializer& ObjectInitializer);

};

