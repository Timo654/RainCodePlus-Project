#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "RCUiWidgetBase.h"
#include "RCReUiMessageWindow.generated.h"

class UImage;
class URCReUiMessageCursor;
class URCReUiMessageFace;
class URCReUiMessageNameplate;
class UTextLayoutWidget;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCReUiMessageWindow : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ScriptString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> StringLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TextInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle HandleTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEndOfText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCReUiMessageCursor* MsgCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCReUiMessageNameplate* Nameplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCReUiMessageFace* FaceWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TalkDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAutoPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoWaitPushTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoDelayFromBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* TalkWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* IMG_EffectsArea_FullScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* TextLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextLayoutWidget* R_TextLine_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextLayoutWidget* R_TextLine_02;
    
public:
    URCReUiMessageWindow();

    UFUNCTION(BlueprintCallable)
    void SetTextData(int32 InCharaNameID, int32 InNameSubID, int32 InCharaFaceID, int32 InFacialID, FName InSpeakerID, const FString& inString, float InDelay);
    
    UFUNCTION(BlueprintCallable)
    void SetText(int32 InCharaNameID, int32 InNameSubID, int32 InCharaFaceID, int32 InFacialID, const FString& inString, float InDelay);
    
    UFUNCTION(BlueprintCallable)
    void SetShakeData(float InWidthX, float InWidthY, float InInterval);
    
    UFUNCTION(BlueprintCallable)
    void SetMessageSpeed();
    
    UFUNCTION(BlueprintCallable)
    void SetForceTextSpeedSettings(bool bInIsForceTextSpeed, int32 InForceTextSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetForceAutoFlag(bool bForceAuto, bool bShowAutoIcon);
    
    UFUNCTION(BlueprintCallable)
    void Open(int32 InCharaNameID, int32 InNameSubID, int32 InCharaFaceID, int32 InFacialID);
    
    UFUNCTION(BlueprintCallable)
    void InitializeMessageWindow();
    
    UFUNCTION(BlueprintCallable)
    bool GetSkipTyping();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMessStatusInt();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    void ClearMessage();
    
};

