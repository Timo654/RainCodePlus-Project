#pragma once
#include "CoreMinimal.h"
#include "RCKakiwariScript.h"
#include "RCKakiwariRender.generated.h"

class UInstancedStaticMeshComponent;
class UMaterialInstanceDynamic;
class URCDitherFadeComponent;

UCLASS(Blueprintable)
class RC_API ARCKakiwariRender : public ARCKakiwariScript {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCDitherFadeComponent* DitherFadeComp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MotionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UInstancedStaticMeshComponent*> MeshArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> DynamicMaterialArray;
    
public:
    ARCKakiwariRender(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetKakiwariMotionIndex(const int32 InMotionIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetKakiwariMotionIndex() const;
    
};

