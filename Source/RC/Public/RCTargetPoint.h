#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/TargetPoint.h"
#include "RCTargetPoint.generated.h"

UCLASS(Blueprintable)
class RC_API ARCTargetPoint : public ATargetPoint {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BaseColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleRate;
    
public:
    ARCTargetPoint(const FObjectInitializer& ObjectInitializer);

};

