#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "RCMenuManager.h"
#include "RCTitleGalleryMovieList.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCTitleGalleryMovieList : public URCMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBarOfPage;
    
public:
    URCTitleGalleryMovieList();

    UFUNCTION(BlueprintCallable)
    void SelectMovie();
    
protected:
    UFUNCTION(BlueprintCallable)
    UWidget* MovieNavigation(EUINavigation InNavigation);
    
};

