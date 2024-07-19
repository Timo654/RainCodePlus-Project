#pragma once
#include "CoreMinimal.h"
#include "RCMenuManager.h"
#include "RCTitleProtManager.generated.h"

class UTextLayoutWidget;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCTitleProtManager : public URCMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextLayoutWidget* TextBlock_00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextLayoutWidget* TextBlock_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextLayoutWidget* TextBlock_02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextLayoutWidget* TextBlock_03;
    
public:
    URCTitleProtManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnKamasakiButton();
    
    UFUNCTION(BlueprintCallable)
    void OnGinmaButton();
    
    UFUNCTION(BlueprintCallable)
    void OnClockTowerButton();
    
    UFUNCTION(BlueprintCallable)
    void OnClockButton();
    
};

