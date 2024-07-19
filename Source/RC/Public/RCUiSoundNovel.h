#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ESoundNovelStatus.h"
#include "RCUiWidgetBase.h"
#include "RCUiSoundNovel.generated.h"

class URCReUiMessageCursor;
class URCUiSoundNovelBack;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiSoundNovel : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCUiSoundNovelBack* BackWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* NovelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCReUiMessageCursor* MsgCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TextInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle HandleTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEndOfText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TalkDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAutoPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoWaitPushTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoDelay;
    
public:
    URCUiSoundNovel();

    UFUNCTION(BlueprintCallable)
    void WaitingOpenBackgroundFade();
    
    UFUNCTION(BlueprintCallable)
    void ShowBackgroundFade();
    
    UFUNCTION(BlueprintCallable)
    void SetShakeData(float InWidthX, float InWidthY, float InInterval);
    
    UFUNCTION(BlueprintCallable)
    void SetMessageSpeed();
    
    UFUNCTION(BlueprintCallable)
    void SetForceTextSpeedSettings(bool bInIsForceTextSpeed, int32 InForceTextSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetForceAutoFlag(bool bForceAuto, bool bShowAutoIcon);
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void InitializeSoundNovel();
    
    UFUNCTION(BlueprintCallable)
    void HideBackgroundFade();
    
    UFUNCTION(BlueprintPure)
    ESoundNovelStatus GetSoundNovelStatus();
    
    UFUNCTION(BlueprintCallable)
    bool GetSkipTyping();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMessStatusInt();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    void ClearText();
    
    UFUNCTION(BlueprintCallable)
    void AddText(const FString& inString, float InDelay);
    
    UFUNCTION(BlueprintCallable)
    void AddSpace(int32 InSpaceNum);
    
};

