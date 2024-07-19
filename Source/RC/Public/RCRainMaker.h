#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "RCRainMaker.generated.h"

UCLASS(Blueprintable)
class RC_API ARCRainMaker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float offsetDropRain;
    
    ARCRainMaker(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRainRotate(FRotator Rot);
    
    UFUNCTION(BlueprintCallable)
    bool SetRainLinearColorDirect(FName Name, FLinearColor col);
    
    UFUNCTION(BlueprintCallable)
    void SetRainForce(int32 paw);
    
    UFUNCTION(BlueprintCallable)
    bool SetRainColorDirect(FName Name, FName aname, FVector4 col);
    
    UFUNCTION(BlueprintCallable)
    bool SetRainColor(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void SetHiddenRain(bool isHidden);
    
    UFUNCTION(BlueprintCallable)
    void SetHiddenOutRain(bool isHidden);
    
    UFUNCTION(BlueprintCallable)
    bool SetCascadeRainColorDirect(FName Map, FName Param, FName aname, FVector col, float A, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    bool SetCascadeRainColor(FName Map, FName Param);
    
};

