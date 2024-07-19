#pragma once
#include "CoreMinimal.h"
#include "RCUserWidget.h"
#include "RCBombReleaseTimeNum.generated.h"

class UImage;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCBombReleaseTimeNum : public URCUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Image_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Image_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Image_2;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 numUVSize;
    
public:
    URCBombReleaseTimeNum();

};

