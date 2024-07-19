#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCVariableNazoCountDown.generated.h"

class URCTimer;

UCLASS(Blueprintable)
class RC_API URCVariableNazoCountDown : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCTimer* CountdownTimer;
    
public:
    URCVariableNazoCountDown();

};

