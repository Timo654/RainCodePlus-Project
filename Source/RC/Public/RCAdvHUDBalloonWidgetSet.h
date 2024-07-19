#pragma once
#include "CoreMinimal.h"
#include "RCAdvHUDBalloonWidgetSet.generated.h"

class ARCWidgetActor;
class URCReUiBalloonFar;
class URCReUiBalloonNear;

USTRUCT(BlueprintType)
struct FRCAdvHUDBalloonWidgetSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCReUiBalloonNear* BalloonNear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCReUiBalloonFar* BalloonFar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCWidgetActor* BalloonActor;
    
    RC_API FRCAdvHUDBalloonWidgetSet();
};

