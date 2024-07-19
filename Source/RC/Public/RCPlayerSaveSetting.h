#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCPlayerSave.h"
#include "RCPlayerSaveSetting.generated.h"

UCLASS(Blueprintable)
class RC_API URCPlayerSaveSetting : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCPlayerSave PlayerSave;
    
    URCPlayerSaveSetting();

};

