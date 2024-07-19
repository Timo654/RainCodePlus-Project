#pragma once
#include "CoreMinimal.h"
#include "KoratFreeTimelineSpawn.h"
#include "ERCFreeTimelinePlayType.h"
#include "RCAttachParamInfo.h"
#include "RCFreeTimelineSpawn.generated.h"

UCLASS(Blueprintable)
class RCEFFECT_API ARCFreeTimelineSpawn : public AKoratFreeTimelineSpawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ERCFreeTimelinePlayType TimelinePlayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAttachParamInfo AttachParam;
    
    ARCFreeTimelineSpawn(const FObjectInitializer& ObjectInitializer);

};

