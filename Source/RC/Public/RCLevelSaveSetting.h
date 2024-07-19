#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCLevelSave.h"
#include "RCLevelSaveSetting.generated.h"

UCLASS(Blueprintable)
class RC_API URCLevelSaveSetting : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCLevelSave LevelSave;
    
    URCLevelSaveSetting();

};

