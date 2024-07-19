#pragma once
#include "CoreMinimal.h"
#include "RCActor.h"
#include "RCCompanionTrigger.generated.h"

class AActor;

UCLASS(Blueprintable)
class RC_API ARCCompanionTrigger : public ARCActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleCompanion;
    
public:
    ARCCompanionTrigger(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnActorBeginOverlapScriptEntry(AActor* OverlappedActor, AActor* OtherActor);
    
};

