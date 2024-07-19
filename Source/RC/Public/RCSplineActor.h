#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "RCActor.h"
#include "RCSplineActor.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class RC_API ARCSplineActor : public ARCActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
public:
    ARCSplineActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool GetSplineTransform(FTransform& OutTransform, float& InOutDistance, float InSpeed, bool bInLoop);
    
    UFUNCTION(BlueprintCallable)
    bool GetSplineLocationAndRotate(FVector& OutLocation, FRotator& OutRotate, float& InOutDistance, float InSpeed, bool bInLoop);
    
    UFUNCTION(BlueprintCallable)
    bool GetSplineLocation(FVector& OutLocation, float& InOutDistance, float InSpeed, bool bInLoop);
    
    UFUNCTION(BlueprintCallable)
    float GetSplineDistanceMax();
    
};

