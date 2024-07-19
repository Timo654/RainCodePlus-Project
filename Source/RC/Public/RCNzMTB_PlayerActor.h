#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RCNzMTB_PlayerActor.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class RC_API ARCNzMTB_PlayerActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Scene;
    
public:
    ARCNzMTB_PlayerActor(const FObjectInitializer& ObjectInitializer);

};

