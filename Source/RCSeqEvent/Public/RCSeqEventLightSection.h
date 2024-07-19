#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "RCSeqEventLightSectionRotatorOffsetData.h"
#include "RCSeqEventLightSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class URCSeqEventLightSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqEventLightSectionRotatorOffsetData RotatorOffsetData;
    
    URCSeqEventLightSection();

};

