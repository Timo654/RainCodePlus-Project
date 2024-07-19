#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "RCActor.h"
#include "RCGetFrameBufferActor.generated.h"

class UMaterialInstanceDynamic;
class UTexture2D;

UCLASS(Blueprintable)
class RC_API ARCGetFrameBufferActor : public ARCActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaterialInstanceDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> CaptureFrameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CaptureFrameTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoCapture;
    
    ARCGetFrameBufferActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopFrameGrab();
    
    UFUNCTION(BlueprintCallable)
    bool StartFrameGrab();
    
    UFUNCTION(BlueprintCallable)
    void SetTriming(FVector Min, FVector Max);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlyColor(FColor col);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialInstanceDynamic(UMaterialInstanceDynamic* MI);
    
    UFUNCTION(BlueprintCallable)
    void ReSetTriming();
    
    UFUNCTION(BlueprintCallable)
    void ReSetOnlyColor();
    
};

