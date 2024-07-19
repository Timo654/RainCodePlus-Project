#pragma once
#include "CoreMinimal.h"
#include "ERCGameMenuDirectAccessType.h"
#include "ERCInputKeyType.h"
#include "RCMenuWidget.h"
#include "RCTopMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCTopMenu : public URCMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CancelEnableTime;
    
public:
    URCTopMenu();

    UFUNCTION(BlueprintCallable)
    void OpenKagiSelect(TArray<FName> InKaiKagiIDArray, bool bInNotPause);
    
    UFUNCTION(BlueprintCallable)
    void OpenContentWrap(ERCInputKeyType InKeyTyoe);
    
    UFUNCTION(BlueprintCallable)
    void Open(ERCGameMenuDirectAccessType bInAccessType, bool bInIsAreaMenuCancel);
    
    UFUNCTION(BlueprintCallable)
    void InitializeTopMenu();
    
    UFUNCTION(BlueprintCallable)
    void CloseWorldMapWrap(ERCInputKeyType InKeyTyoe);
    
    UFUNCTION(BlueprintCallable)
    void CloseMenuWrap(ERCInputKeyType InKeyTyoe);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

