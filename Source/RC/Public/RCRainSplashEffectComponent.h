#pragma once
#include "CoreMinimal.h"
#include "RCEffectComponent.h"
#include "RCEffectComponentData.h"
#include "RCRainSplashEffectComponent.generated.h"

class ACharacter;
class USkeletalMeshComponent;
class UStaticMesh;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RC_API URCRainSplashEffectComponent : public URCEffectComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* OwnerMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ComponentNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachPointHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachPointSpine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCEffectComponentData RainSplashEffectData_Head;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCEffectComponentData RainSplashEffectData_Spine;
    
public:
    URCRainSplashEffectComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool EffectStart(UPARAM(Ref) FRCEffectComponentData& InEffectData, FName InAttachPointName, UStaticMesh* InEmitterMesh, float InOffset, float InSpawnRate);
    
    UFUNCTION(BlueprintCallable)
    bool EffectSpawn(UPARAM(Ref) FRCEffectComponentData& InEffectData, FName InAttachPointName, UStaticMesh* InEmitterMesh, float InOffset, float InSpawnRate);
    
};

