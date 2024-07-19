#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RCMovingActorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RC_API URCMovingActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString engineSoundID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isEngineSound;
    
public:
    URCMovingActorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEngineSoundID(const FString& SoundId);
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableEngineSound();
    
    UFUNCTION(BlueprintCallable)
    FString GetEngineSoundID();
    
    UFUNCTION(BlueprintCallable)
    void EnableEngineSound(bool IsEnable);
    
};

