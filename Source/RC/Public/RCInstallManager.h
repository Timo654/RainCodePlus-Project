#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCInstallManager.generated.h"

class URCInstallInterface;

UCLASS(Blueprintable)
class RC_API URCInstallManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCInstallInterface* Install;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugInstallNotComplete;
    
public:
    URCInstallManager();

};

