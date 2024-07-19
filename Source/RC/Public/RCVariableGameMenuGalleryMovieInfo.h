#pragma once
#include "CoreMinimal.h"
#include "RCVariableGameMenuGalleryMovieInfo.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCVariableGameMenuGalleryMovieInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MovieID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNew;
    
    FRCVariableGameMenuGalleryMovieInfo();
};

