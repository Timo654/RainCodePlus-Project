#pragma once
#include "CoreMinimal.h"
#include "RCUserWidget.h"
#include "RCSaveLoadListImage.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCSaveLoadListImage : public URCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Chara_Face_Dummy_000;
    
public:
    URCSaveLoadListImage();

};

