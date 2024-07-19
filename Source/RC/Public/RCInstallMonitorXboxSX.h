#pragma once
#include "CoreMinimal.h"
#include "RCInstallInterface.h"
#include "RCInstallMonitorXboxSX.generated.h"

UCLASS(Blueprintable)
class RC_API URCInstallMonitorXboxSX : public URCInstallInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAllChunkInstalled;
    
public:
    URCInstallMonitorXboxSX();

};

