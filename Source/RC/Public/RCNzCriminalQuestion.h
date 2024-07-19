#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCNzCriminalQuestion.generated.h"

class UTextLayoutWidget;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzCriminalQuestion : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextLayoutWidget* SpText_Question;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuestionFontSize;
    
public:
    URCNzCriminalQuestion();

};

