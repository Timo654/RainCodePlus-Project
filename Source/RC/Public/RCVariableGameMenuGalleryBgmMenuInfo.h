#pragma once
#include "CoreMinimal.h"
#include "RCVariableGameMenuGalleryBgmInfo.h"
#include "RCVariableGameMenuGalleryBgmMenuInfo.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCVariableGameMenuGalleryBgmMenuInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCVariableGameMenuGalleryBgmInfo> BgmGalleryList;
    
    FRCVariableGameMenuGalleryBgmMenuInfo();
};

