#pragma once
#include "CoreMinimal.h"
#include "RCActor.h"
#include "RCWidgetActor.generated.h"

class URC3DWidgetComponent;
class URCUiWidgetBase;

UCLASS(Blueprintable)
class RC_API ARCWidgetActor : public ARCActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URC3DWidgetComponent* WidgetComponent;
    
public:
    ARCWidgetActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWidget(URCUiWidgetBase* InWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetActorVisibility(bool bInShow);
    
    UFUNCTION(BlueprintCallable)
    URCUiWidgetBase* GetWidget();
    
};

