#pragma once
#include "CoreMinimal.h"
#include "RCSaveLoadSelectButtonBase.h"
#include "RCSaveLoadSelectButtonLoad.generated.h"

class URCSaveLoadSelectLoopBase;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCSaveLoadSelectButtonLoad : public URCSaveLoadSelectButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCSaveLoadSelectLoopBase* Button_Load_On;
    
public:
    URCSaveLoadSelectButtonLoad();

};

