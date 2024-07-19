#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "RCSeqEventLoopSectionCheckLoopData.h"
#include "RCSeqEventLoopSectionJumpData.h"
#include "RCSeqEventLoopSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class URCSeqEventLoopSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqEventLoopSectionCheckLoopData CheckLoopData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqEventLoopSectionJumpData JumpData;
    
    URCSeqEventLoopSection();

};

