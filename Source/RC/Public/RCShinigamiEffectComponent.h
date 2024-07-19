#pragma once
#include "CoreMinimal.h"
#include "RCEffectComponent.h"
#include "RCEffectComponentData.h"
#include "RCShinigamiEffectComponent.generated.h"

class ACharacter;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RC_API URCShinigamiEffectComponent : public URCEffectComponent {
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
    FName AttachPointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCEffectComponentData AuraEffectData_Always;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCEffectComponentData AuraEffectData_Stop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCEffectComponentData AuraEffectData_Move0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCEffectComponentData AuraEffectData_Move1;
    
public:
    URCShinigamiEffectComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool EffectStart(UPARAM(Ref) FRCEffectComponentData& InEffectData);
    
    UFUNCTION(BlueprintCallable)
    bool EffectSpawn(UPARAM(Ref) FRCEffectComponentData& InEffectData);
    
};

