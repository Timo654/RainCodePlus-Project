#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SpMovieSceneComboBoxStringChannel.h"
#include "SpMovieSceneComboBoxStringSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USpMovieSceneComboBoxStringSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpMovieSceneComboBoxStringChannel StringCurve;
    
public:
    USpMovieSceneComboBoxStringSection();

};

