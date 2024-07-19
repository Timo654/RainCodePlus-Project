#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "RCMenuManager.h"
#include "RCTitleGalleryBGMList.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCTitleGalleryBGMList : public URCMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBarOfPage;
    
public:
    URCTitleGalleryBGMList();

    UFUNCTION(BlueprintCallable)
    void SelectBGM();
    
protected:
    UFUNCTION(BlueprintCallable)
    UWidget* BGMNavigation(EUINavigation InNavigation);
    
};

