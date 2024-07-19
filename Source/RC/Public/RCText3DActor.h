#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "RCText3DActor.generated.h"

class URCText3DComponent;

UCLASS(Blueprintable)
class RC_API ARCText3DActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActorName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCText3DComponent* Text3DComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPause;
    
public:
    ARCText3DActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWidth(float Width, bool bActorScale, bool bExceptJA);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibility(bool bInVisible, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    void SetPause(bool bInPause, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    bool IsVisibility();
    
    UFUNCTION(BlueprintCallable)
    bool IsPause();
    
    UFUNCTION(BlueprintCallable)
    void GetTextSize(FVector& OutTextSize);
    
    UFUNCTION(BlueprintCallable)
    FText GetText();
    
};

