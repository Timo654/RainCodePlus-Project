#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RCCrossWalkController.generated.h"

UCLASS(Blueprintable)
class RC_API ARCCrossWalkController : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float throughLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName crossWalkTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName crossWalkSwitchTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName playerActorTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName signalBoxTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> crossWalkArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> crossWalkSwitchArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> signalBoxArray;
    
public:
    ARCCrossWalkController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    float GetThroughLength();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetCrossWalkActor(int32 crossWalkIndex);
    
    UFUNCTION(BlueprintCallable)
    float GetCheckLength();
    
};

