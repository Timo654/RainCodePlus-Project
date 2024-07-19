#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCDevelopmentSave.h"
#include "RCDevelopmentSaveSetting.generated.h"

UCLASS(Blueprintable)
class RC_API URCDevelopmentSaveSetting : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCDevelopmentSave DevelopmentSave;
    
    URCDevelopmentSaveSetting();

};

