#pragma once
#include "CoreMinimal.h"
#include "RCVariableGameMenuGalleryBgmInfo.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCVariableGameMenuGalleryBgmInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BgmID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNew;
    
    FRCVariableGameMenuGalleryBgmInfo();
};

