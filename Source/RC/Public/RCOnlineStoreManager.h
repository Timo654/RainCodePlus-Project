#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCOnlineStoreManager.generated.h"

class URCOnlineStoreInterface;

UCLASS(Blueprintable)
class RC_API URCOnlineStoreManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCOnlineStoreInterface* OnlineStore;
    
public:
    URCOnlineStoreManager();

};

