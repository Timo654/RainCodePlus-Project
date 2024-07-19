#pragma once
#include "CoreMinimal.h"
#include "ERCSceneChangeType.h"
#include "RCFaderHUDHiddenWidgetData.h"
#include "RCHUD.h"
#include "RCMenuOpenDelegate.h"
#include "RCUiFaderHUD.generated.h"

class ARCOptionUIWrap;
class URCHUDLoadComponent;
class URCSaveLoadLayout;
class URCSceneChangeMediator;
class URCTipsScreen;
class URCUiOptionLayout;
class URCUiSavingIcon;
class URCUiShortLoadingIcon;
class URCUiTipsScreenWidget;
class URCUiWidgetBase;

UCLASS(Blueprintable, NonTransient)
class RC_API ARCUiFaderHUD : public ARCHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCHUDLoadComponent* LoadComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiShortLoadingIcon* ShortLoadIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiSavingIcon* SavingIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiTipsScreenWidget* TipsScreenWidget_WithEditor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCTipsScreen* TipsScreenWidget;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCSaveLoadLayout* SaveLoadLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SaveLoadLayoutPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isSaveLoadFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRCFaderHUDHiddenWidgetData> HiddenWidgetDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<URCUiWidgetBase*> NotHiddenWidgetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllWidgetsHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllWidgetsHiddenEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiOptionLayout* OptionLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OptionLayoutPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OptionLayoutPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCOptionUIWrap* OptionOpener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCSceneChangeMediator* SceneChangeMediator;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCMenuOpen OnMenuOpen;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCMenuOpen OnMenuClose;
    
    ARCUiFaderHUD(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartSceneChangeLoadingTest();
    
    UFUNCTION(BlueprintCallable)
    void StartSceneChange(ERCSceneChangeType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetSaveLoadFinished(bool isFinish);
    
    UFUNCTION(BlueprintCallable)
    void SetAllWidgetsHiddenEnable(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    bool SetAllWidgetsHidden(bool bInHidden);
    
    UFUNCTION(BlueprintCallable)
    bool SaveLoadFinish();
    
    UFUNCTION(BlueprintCallable)
    void OptionStartWrap();
    
    UFUNCTION(BlueprintCallable)
    void Option_Start();
    
    UFUNCTION(BlueprintCallable)
    void Option_Release();
    
    UFUNCTION(BlueprintCallable)
    bool Option_Load();
    
    UFUNCTION(BlueprintCallable)
    bool Option_IsFinished();
    
    UFUNCTION(BlueprintCallable)
    bool Option_CreateWidget();
    
    UFUNCTION(BlueprintCallable)
    void Option_Close();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllWidgetsHiddenEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllWidgetsHidden();
    
    UFUNCTION(BlueprintCallable)
    void FinishSceneChange();
    
    UFUNCTION(BlueprintCallable)
    bool CheckSaveLoadFinished();
    
};

