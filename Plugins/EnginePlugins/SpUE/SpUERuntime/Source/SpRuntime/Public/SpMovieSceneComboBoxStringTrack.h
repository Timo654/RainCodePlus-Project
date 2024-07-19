#pragma once
#include "CoreMinimal.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "Tracks/MovieScenePropertyTrack.h"
#include "SpMovieSceneComboBoxStructVariableInfo.h"
#include "SpMovieSceneComboBoxStringTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USpMovieSceneComboBoxStringTrack : public UMovieScenePropertyTrack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpMovieSceneComboBoxStructVariableInfo StructVarInfo;
    
public:
    USpMovieSceneComboBoxStringTrack();

    // Fix for true pure virtual functions not being implemented
};

