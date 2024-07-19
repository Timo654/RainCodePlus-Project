#pragma once
#include "CoreMinimal.h"
#include "RCVariableGameMenuGalleryMenuInfo.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCVariableGameMenuGalleryMenuInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAccess;
    
    FRCVariableGameMenuGalleryMenuInfo();
};

