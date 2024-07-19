#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCVariableGameMenuGalleryBgmMenuInfo.h"
#include "RCVariableGameMenuGalleryBgm.generated.h"

UCLASS(Blueprintable)
class RC_API URCVariableGameMenuGalleryBgm : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableGameMenuGalleryBgmMenuInfo BgmGalleryMenuInfo;
    
public:
    URCVariableGameMenuGalleryBgm();

};

