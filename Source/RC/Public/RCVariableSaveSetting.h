#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCVariableSave.h"
#include "RCVariableSystemSave.h"
#include "RCVariableSaveSetting.generated.h"

UCLASS(Blueprintable)
class RC_API URCVariableSaveSetting : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableSystemSave VariableSystemSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableSave VariableSave;
    
    URCVariableSaveSetting();

};

