#pragma once
#include "CoreMinimal.h"
#include "RCCharacterRender.h"
#include "RCPlayerCharacter.generated.h"

class AActor;
class URCCharacterAnimCtrl;

UCLASS(Blueprintable)
class RC_API ARCPlayerCharacter : public ARCCharacterRender {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> lru_stairway_hold_;
    
public:
    ARCPlayerCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    URCCharacterAnimCtrl* GetAnimCtrl();
    
};

