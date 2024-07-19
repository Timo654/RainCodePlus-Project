#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCNzResultRank.generated.h"

class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzResultRank : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_Rank;
    
public:
    URCNzResultRank();

};

