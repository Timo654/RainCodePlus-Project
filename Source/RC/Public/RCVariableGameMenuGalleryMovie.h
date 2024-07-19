#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCVariableGameMenuGalleryMovieMenuInfo.h"
#include "RCVariableGameMenuGalleryMovie.generated.h"

UCLASS(Blueprintable)
class RC_API URCVariableGameMenuGalleryMovie : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableGameMenuGalleryMovieMenuInfo MovieGalleryMenuInfo;
    
public:
    URCVariableGameMenuGalleryMovie();

};

