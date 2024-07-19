#pragma once
#include "CoreMinimal.h"
#include "RCCharacterFacialCtrl.h"
#include "RCShinigamiFacialCtrl.generated.h"

class URCMorphBlender;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RC_API URCShinigamiFacialCtrl : public URCCharacterFacialCtrl {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCMorphBlender* BodyMorphBlend;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCMorphBlender* HandMorphBlend;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCMorphBlender* EyeBackOffMorphBlend;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCMorphBlender* EyebrowBackOffMorphBlend;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCMorphBlender* MouthBackOffMorphBlend;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCMorphBlender* BodyBackOffMorphBlend;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCMorphBlender* HandBackOffMorphBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentDisplacementTextureName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentDisplacementMaskTextureName;
    
public:
    URCShinigamiFacialCtrl(const FObjectInitializer& ObjectInitializer);

};

