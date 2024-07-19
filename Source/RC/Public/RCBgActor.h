#pragma once
#include "CoreMinimal.h"
#include "RCActor.h"
#include "RCBgActor.generated.h"

UCLASS(Blueprintable)
class RC_API ARCBgActor : public ARCActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDraw;
    
public:
    ARCBgActor(const FObjectInitializer& ObjectInitializer);

};

