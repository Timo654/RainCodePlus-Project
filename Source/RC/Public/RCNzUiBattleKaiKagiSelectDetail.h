#pragma once
#include "CoreMinimal.h"
#include "ERCInputKeyType.h"
#include "ERCNzUiBattleKaiKagiSelectPartsAnimType.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiBattleKaiKagiSelectDetail.generated.h"

class UButton;
class UImage;
class URCUiButtonGuideParts;
class UTextBlock;
class UTexture2D;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiBattleKaiKagiSelectDetail : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_KaikagiDetail_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_KaikagiDetail_02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_KaikagiDetail_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_KaikagiDetail_04;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_KaikagiDetail_05;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_KaikagiDetail_06;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Img_KaikagiImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_ButtonGuideText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiButtonGuideParts* WBP_ButtonGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* ClickebleButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Prev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Btn_On;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Btn_Off;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> AnimArray;
    
public:
    URCNzUiBattleKaiKagiSelectDetail();

    UFUNCTION(BlueprintCallable)
    void UninitializeBattleKaiKagiSelectDetail();
    
    UFUNCTION(BlueprintCallable)
    void SetMouseButtonEnable();
    
    UFUNCTION(BlueprintCallable)
    void SetMouseButtonDisable();
    
    UFUNCTION(BlueprintCallable)
    void SetInputFromButtonGuide(ERCInputKeyType InType);
    
    UFUNCTION(BlueprintCallable)
    void SetImageTexture(UTexture2D* ImageTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetDetailTextID(FName DetailTextID);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnim(ERCNzUiBattleKaiKagiSelectPartsAnimType AnimType);
    
    UFUNCTION(BlueprintCallable)
    void OnMouseUnhoverdEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnMouseHoverdEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnMouseClickEvent();
    
    UFUNCTION(BlueprintCallable)
    void InitializeBattleKaiKagiSelectDetail();
    
};

