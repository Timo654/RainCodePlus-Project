#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCLoadingManager.generated.h"

class URCTimer;

UCLASS(Blueprintable)
class RC_API URCLoadingManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCTimer* LoadingTimer;
    
public:
    URCLoadingManager();

};
