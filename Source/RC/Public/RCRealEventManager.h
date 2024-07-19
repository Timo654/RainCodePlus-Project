#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCRealEventManager.generated.h"

class URCRealEventAllMapInfo;
class URCRealEventSettingManager;
class URCRealMapConnectManager;

UCLASS(Blueprintable)
class RC_API URCRealEventManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCRealEventSettingManager* EventSettingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCRealMapConnectManager* MapConnectManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCRealEventAllMapInfo* AllMapInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInfoChange;
    
public:
    URCRealEventManager();

};

