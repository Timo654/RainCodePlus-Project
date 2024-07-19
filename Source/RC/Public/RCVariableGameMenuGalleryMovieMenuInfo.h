#pragma once
#include "CoreMinimal.h"
#include "RCVariableGameMenuGalleryMovieInfo.h"
#include "RCVariableGameMenuGalleryMovieMenuInfo.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCVariableGameMenuGalleryMovieMenuInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCVariableGameMenuGalleryMovieInfo> MovieGalleryList;
    
    FRCVariableGameMenuGalleryMovieMenuInfo();
};

