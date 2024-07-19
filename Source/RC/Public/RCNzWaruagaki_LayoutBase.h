#pragma once
#include "CoreMinimal.h"
#include "RCUserWidget.h"
#include "Waruagaki_LogoHiddenFinishedDelegate.h"
#include "RCNzWaruagaki_LayoutBase.generated.h"

class URCNzCriminalButtonGuideList;
class URCNzUiBattleHPGauge;
class URCNzUiBattleKaiKagi;
class URCNzWaruagaki_LogoBase;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzWaruagaki_LayoutBase : public URCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzWaruagaki_LogoBase* Logo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiBattleKaiKagi* KaikagiSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCNzCriminalButtonGuideList* ButtonGuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* InformationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCNzUiBattleHPGauge* HPGauge;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaruagaki_LogoHiddenFinished WaruagakiLogoHiddenFinished;
    
    URCNzWaruagaki_LayoutBase();

    UFUNCTION(BlueprintCallable)
    void ShowStartLogoAnimFinishedEvent();
    
    UFUNCTION(BlueprintCallable)
    void ShowButtonGuide(bool IsNormalMode);
    
    UFUNCTION(BlueprintCallable)
    void SetKaiKagiName(FName InTextID);
    
    UFUNCTION(BlueprintCallable)
    void SetHP(int32 OldHP, int32 NewHP, bool PlayDamageAnimation);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseWaruagakiLayout();
    
    UFUNCTION(BlueprintCallable)
    void PlayWaruagakiLogoShowAnim();
    
    UFUNCTION(BlueprintCallable)
    void InitializeWaruagakiUI();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeKaikagiQuestionAndInfoUI(const FString& Heading, const FString& question);
    
    UFUNCTION(BlueprintCallable)
    void HideButtonGuide();
    
};

