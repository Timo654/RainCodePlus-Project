#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCUserWidget.h"
#include "RCStartupWidget.generated.h"

class UImage;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCStartupWidget : public URCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_StartUpLogo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float skippableTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float progressTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isSkippable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isTimeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath StartUpLogoImagePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLoadingImage;
    
public:
    URCStartupWidget();

    UFUNCTION(BlueprintCallable)
    void SetTimeCount(bool isCount);
    
    UFUNCTION(BlueprintCallable)
    void SetSkippableTime(float Time);
    
    UFUNCTION(BlueprintCallable)
    void PlayWaitAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayStartAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayFinishAnimation();
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    bool IsSkip();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayingWaitAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayingStartAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayingFinishAnimation();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

