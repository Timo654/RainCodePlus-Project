#pragma once
#include "CoreMinimal.h"
#include "RCNzCriminalcameraSettingData.generated.h"

USTRUCT(BlueprintType)
struct FRCNzCriminalcameraSettingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> CameraBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> CameraFocalLength;
    
    RC_API FRCNzCriminalcameraSettingData();
};

