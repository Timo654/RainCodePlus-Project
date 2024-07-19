#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCNzCriminalSubtitles.generated.h"

class UTextLayoutWidget;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzCriminalSubtitles : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextLayoutWidget* RichTextBlock_Subtitles;
    
public:
    URCNzCriminalSubtitles();

};

