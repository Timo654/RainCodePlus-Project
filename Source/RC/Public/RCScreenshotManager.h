#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCScreenshotManager.generated.h"

UCLASS(Blueprintable)
class RC_API URCScreenshotManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
public:
    URCScreenshotManager();

};

