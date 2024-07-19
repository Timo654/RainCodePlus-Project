#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiFinaleQuestionRestWidget.generated.h"

class UImage;
class UTextBlock;
class UTexture2D;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiFinaleQuestionRestWidget : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* RestNumberText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* RestNumImg_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* RestNumImg_02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> NumTextureList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RestNumTexPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_PieceCorrect;
    
public:
    URCNzUiFinaleQuestionRestWidget();

    UFUNCTION(BlueprintCallable)
    void SetQuestionNum(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void PlayPieeCorrectAnim();
    
    UFUNCTION(BlueprintCallable)
    void InitializeFinaleQuestionRestWidget();
    
};

