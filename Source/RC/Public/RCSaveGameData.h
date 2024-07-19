#pragma once
#include "CoreMinimal.h"
#include "RCLevelSave.h"
#include "RCPlayerSave.h"
#include "RCSaveGame.h"
#include "RCVariableSave.h"
#include "RCSaveGameData.generated.h"

UCLASS(Blueprintable)
class RC_API URCSaveGameData : public URCSaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableSave VariableSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCPlayerSave PlayerSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCLevelSave LevelSave;
    
public:
    URCSaveGameData();

};

