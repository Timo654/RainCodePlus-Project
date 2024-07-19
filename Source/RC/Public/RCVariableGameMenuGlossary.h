#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCVariableGameMenuGlossaryMenuInfo.h"
#include "RCVariableGameMenuGlossary.generated.h"

UCLASS(Blueprintable)
class RC_API URCVariableGameMenuGlossary : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableGameMenuGlossaryMenuInfo GlossaryMenuList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableGameMenuGlossaryMenuInfo SubStoryGlossaryMenuList;
    
public:
    URCVariableGameMenuGlossary();

};

