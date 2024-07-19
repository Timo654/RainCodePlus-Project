#pragma once
#include "CoreMinimal.h"
#include "RCStartupWidget.h"
#include "RCSubStoryStartupAutoSave.generated.h"

class URCUiSavingIcon;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCSubStoryStartupAutoSave : public URCStartupWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiSavingIcon* SavingIcon;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isFinish;
    
    URCSubStoryStartupAutoSave();

private:
    UFUNCTION(BlueprintCallable)
    void SetText(FName InTextID);
    
    UFUNCTION(BlueprintCallable)
    void SaveIconFinish();
    
};

