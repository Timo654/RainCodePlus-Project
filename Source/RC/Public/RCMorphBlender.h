#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ERCCharacterMorphTarget.h"
#include "RCMorphBlender.generated.h"

class UEnum;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class RC_API URCMorphBlender : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* TargetMesh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FacialCharacterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnum* MorphTargetEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERCCharacterMorphTarget, int32> EnumMapper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Dict;
    
public:
    URCMorphBlender();

};

