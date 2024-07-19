#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCBgActorManager.generated.h"

class ARCBgActor;

UCLASS(Blueprintable)
class RC_API URCBgActorManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARCBgActor*> BgActorList;
    
public:
    URCBgActorManager();

};

