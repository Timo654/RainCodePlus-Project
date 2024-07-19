#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCSkillStatusInfo.h"
#include "RCVariableGameMenuPersonaMenuInfo.h"
#include "RCVariableGameMenuPersona.generated.h"

UCLASS(Blueprintable)
class RC_API URCVariableGameMenuPersona : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableGameMenuPersonaMenuInfo PersonaMenuInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSkillStatusInfo SkillStatusInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultHp;
    
public:
    URCVariableGameMenuPersona();

};

