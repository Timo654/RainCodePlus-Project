#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCVariableGameMenuGalleryMenuInfo.h"
#include "RCVariableGameMenuGallery.generated.h"

class URCVariableGameMenuGalleryBgm;
class URCVariableGameMenuGalleryMovie;

UCLASS(Blueprintable)
class RC_API URCVariableGameMenuGallery : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableGameMenuGalleryMenuInfo GalleryMenuInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCVariableGameMenuGalleryBgm* GalleryBgm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCVariableGameMenuGalleryMovie* GalleryMovie;
    
public:
    URCVariableGameMenuGallery();

};

