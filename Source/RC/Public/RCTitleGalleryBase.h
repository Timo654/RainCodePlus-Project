#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCTitleGalleryBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCTitleGalleryBase : public URCUiWidgetBase {
    GENERATED_BODY()
public:
    URCTitleGalleryBase();

    UFUNCTION(BlueprintCallable)
    void Open(bool bBackFromGalleryMovie);
    
    UFUNCTION(BlueprintCallable)
    void InitializeGallery();
    
};

