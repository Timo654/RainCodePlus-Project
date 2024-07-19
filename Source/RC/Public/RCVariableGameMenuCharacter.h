#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCVariableGameMenuCharacterMenuInfo.h"
#include "RCVariableGameMenuCharacter.generated.h"

UCLASS(Blueprintable)
class RC_API URCVariableGameMenuCharacter : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableGameMenuCharacterMenuInfo CharacterMenuInfo;
    
public:
    URCVariableGameMenuCharacter();

};

