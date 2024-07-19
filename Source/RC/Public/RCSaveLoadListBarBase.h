#pragma once
#include "CoreMinimal.h"
#include "RCUserWidget.h"
#include "RCSaveLoadListBarBase.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCSaveLoadListBarBase : public URCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* SvLd_ListBar_Base;
    
public:
    URCSaveLoadListBarBase();

};

