#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Margin.h"
#include "RCUiWidgetBase.h"
#include "RCNzPuzzleHintBalloonBase.generated.h"

class UImage;
class URCNzPuzzleHintBalloonTextBase;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzPuzzleHintBalloonBase : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzPuzzleHintBalloonTextBase* HintText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* decoImg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VoiceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D widgetPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin decoImgMargin;
    
public:
    URCNzPuzzleHintBalloonBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowHintAfterEvent();
    
    UFUNCTION(BlueprintCallable)
    void ShowHint(const FText Text, const FName NewVoiceID);
    
    UFUNCTION(BlueprintCallable)
    void SetWidgetPosition(FVector2D NewPosition);
    
    UFUNCTION(BlueprintCallable)
    void PlayHint();
    
    UFUNCTION(BlueprintCallable)
    void InitializePuzzleHintBalloon();
    
    UFUNCTION(BlueprintCallable)
    bool CheckCursorHover(FVector2D cursorPos);
    
};

