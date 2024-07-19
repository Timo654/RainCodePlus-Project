#pragma once
#include "CoreMinimal.h"
#include "RCSaveLoadSelectButtonBase.h"
#include "RCSaveLoadSelectButtonTitle.generated.h"

class URCSaveLoadSelectLoopBase;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCSaveLoadSelectButtonTitle : public URCSaveLoadSelectButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCSaveLoadSelectLoopBase* Button_Title_On;
    
public:
    URCSaveLoadSelectButtonTitle();

};

