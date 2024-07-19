#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCNazoLoopLSACameraData.h"
#include "RCNazoMoveLoopLSACameraData.generated.h"

class AActor;
class ARCCineCameraActor;

USTRUCT(BlueprintType)
struct FRCNazoMoveLoopLSACameraData : public FRCNazoLoopLSACameraData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CameraBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCCineCameraActor* Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PrevLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PrevCameraBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCCineCameraActor* PrevCamera;
    
    RC_API FRCNazoMoveLoopLSACameraData();
};

