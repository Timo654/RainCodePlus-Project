#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCSingletonObject.generated.h"

class URCUiShortLoadingIcon;
class URCUiTipsScreenWidget;

UCLASS(Blueprintable)
class RC_API URCSingletonObject : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCUiShortLoadingIcon* ShortLoadingIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCUiTipsScreenWidget* TipScreenWidget;
    
public:
    URCSingletonObject();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTick(float DeltaSeconds);
    
};

