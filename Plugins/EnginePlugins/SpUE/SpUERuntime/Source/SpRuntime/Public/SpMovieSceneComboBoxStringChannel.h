#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneStringChannel.h"
#include "SpMovieSceneComboBoxStringChannel.generated.h"

USTRUCT(BlueprintType)
struct SPRUNTIME_API FSpMovieSceneComboBoxStringChannel : public FMovieSceneStringChannel {
    GENERATED_BODY()
public:
    FSpMovieSceneComboBoxStringChannel();
};

