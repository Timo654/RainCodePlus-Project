#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RCNzFinaleDetectiveBackGround.generated.h"

class ARCNzFinaleManagerBase;
class UTexture;

UCLASS(Blueprintable)
class RC_API ARCNzFinaleDetectiveBackGround : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCNzFinaleManagerBase* FinaleManager;
    
public:
    ARCNzFinaleDetectiveBackGround(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisiblityBackground(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeBackgroundImg(const UTexture* Texture);
    
};

