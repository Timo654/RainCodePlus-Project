#pragma once
#include "CoreMinimal.h"
#include "RCUserWidget.h"
#include "RCMenuCollectionFace.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCMenuCollectionFace : public URCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Face_Dummy_000;
    
public:
    URCMenuCollectionFace();

};

