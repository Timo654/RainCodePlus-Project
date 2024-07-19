#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERCNzUiBattleAssistStatus.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiBattleAssist.generated.h"

class UCanvasPanel;
class UImage;
class URCUiButtonGuideParts;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiBattleAssist : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_AssistBarMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_AssistBarNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Img_AssistFace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* AssistBar_Mask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCUiButtonGuideParts* WBP_ButtonGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadingImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath FaceImagePath;
    
public:
    URCNzUiBattleAssist();

    UFUNCTION(BlueprintCallable)
    void UninitializeBattleAssist();
    
    UFUNCTION(BlueprintCallable)
    void SetAssistGauge(float InAssistGauge, float InAssistGaugeMax);
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void InitializeBattleAssist(FSoftObjectPath InFaceImagePath);
    
    UFUNCTION(BlueprintCallable)
    ERCNzUiBattleAssistStatus GetBattleCutinStatus();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

