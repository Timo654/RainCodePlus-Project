#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCVariableNazoBattleInfo.h"
#include "RCVariableNazoBattle.generated.h"

UCLASS(Blueprintable)
class RC_API URCVariableNazoBattle : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableNazoBattleInfo BattleInfo;
    
public:
    URCVariableNazoBattle();

};

