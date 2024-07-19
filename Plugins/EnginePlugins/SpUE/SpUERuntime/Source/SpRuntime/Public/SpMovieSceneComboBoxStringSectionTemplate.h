#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieScenePropertyTemplate.h"
#include "SpMovieSceneComboBoxStringChannel.h"
#include "SpMovieSceneComboBoxStringSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FSpMovieSceneComboBoxStringSectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpMovieSceneComboBoxStringChannel StringCurve;
    
public:
    SPRUNTIME_API FSpMovieSceneComboBoxStringSectionTemplate();
};

