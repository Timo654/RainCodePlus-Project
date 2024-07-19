#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "RCSeqEventTemplate.generated.h"

USTRUCT(BlueprintType)
struct FRCSeqEventTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    RCSEQEVENT_API FRCSeqEventTemplate();
};

