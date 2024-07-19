#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ERCForceFeedBackLoadStatus.h"
#include "ERCInputPlatform.h"
#include "RCForceFeedBackManager.generated.h"

UCLASS(Blueprintable)
class RC_API URCForceFeedBackManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCForceFeedBackLoadStatus LoadStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCInputPlatform InputPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCInputPlatform NextInputPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCInputPlatform LoadedPlatform;
    
public:
    URCForceFeedBackManager();

};

