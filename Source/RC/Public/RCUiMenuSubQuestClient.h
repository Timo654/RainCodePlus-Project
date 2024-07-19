#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCUiMenuSubQuestClient.generated.h"

class UTextLayoutWidget;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiMenuSubQuestClient : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextLayoutWidget* Text_Client;
    
public:
    URCUiMenuSubQuestClient();

};

