#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RCNazoMoveLoopParentActor_NotifyDelegate.h"
#include "RCNazoMoveLoopParentActor.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class RC_API ARCNazoMoveLoopParentActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ChildActorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> ReentryActorClassArray;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoMoveLoopParentActor_Notify OnWarp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoMoveLoopParentActor_Notify OnWarpToLast;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoMoveLoopParentActor_Notify OnWarpEnd;
    
    ARCNazoMoveLoopParentActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ReentryActors();
    
};

