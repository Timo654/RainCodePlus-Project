#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCVariableGameMenuTopMenuInfo.h"
#include "RCVariableGameMenuTop.generated.h"

class URCVariableGameMenu;

UCLASS(Blueprintable)
class RC_API URCVariableGameMenuTop : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCVariableGameMenu* ParrentGameMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableGameMenuTopMenuInfo TopMenuInfo;
    
public:
    URCVariableGameMenuTop();

};

