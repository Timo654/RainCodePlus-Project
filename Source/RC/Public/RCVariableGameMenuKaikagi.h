#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCVariableGameMenuKaikagiMenuInfo.h"
#include "RCVariableGameMenuKaikagi.generated.h"

UCLASS(Blueprintable)
class RC_API URCVariableGameMenuKaikagi : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableGameMenuKaikagiMenuInfo KaikagiMenuInfo;
    
public:
    URCVariableGameMenuKaikagi();

};

