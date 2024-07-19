#pragma once
#include "CoreMinimal.h"
#include "RCSaveLoadSelectButtonBase.h"
#include "RCSaveLoadSelectButtonSave.generated.h"

class URCSaveLoadSelectLoopBase;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCSaveLoadSelectButtonSave : public URCSaveLoadSelectButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCSaveLoadSelectLoopBase* Button_Save_On;
    
public:
    URCSaveLoadSelectButtonSave();

};

