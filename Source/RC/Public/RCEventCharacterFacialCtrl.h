#pragma once
#include "CoreMinimal.h"
#include "RCCharacterFacialCtrl.h"
#include "RCEventCharacterFacialCtrl.generated.h"

class URCMorphBlender;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RC_API URCEventCharacterFacialCtrl : public URCCharacterFacialCtrl {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCMorphBlender* ShellEyeMorphBlend;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCMorphBlender* ShellEyebrowMorphBlend;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCMorphBlender* ShellMouthMorphBlend;
    
public:
    URCEventCharacterFacialCtrl(const FObjectInitializer& ObjectInitializer);

};

