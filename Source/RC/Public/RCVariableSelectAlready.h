#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCVariableSelectAlreadyAllInfo.h"
#include "RCVariableSelectAlready.generated.h"

UCLASS(Blueprintable)
class RC_API URCVariableSelectAlready : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableSelectAlreadyAllInfo SelectAlreadyAllInfo;
    
public:
    URCVariableSelectAlready();

};

