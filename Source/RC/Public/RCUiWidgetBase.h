#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCUiWidget.h"
#include "RCUiWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiWidgetBase : public URCUiWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MPCPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTimeOfMaterial;
    
public:
    URCUiWidgetBase();

    UFUNCTION(BlueprintCallable)
    void SetPosition(FVector2D In2DPosition);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RegistTutorial();
    
    UFUNCTION(BlueprintCallable)
    void MoveToCenter();
    
    UFUNCTION(BlueprintCallable)
    bool LoadCheck();
    
    UFUNCTION(BlueprintCallable)
    bool IsWidgetPause();
    
};

