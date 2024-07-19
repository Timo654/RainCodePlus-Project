#pragma once
#include "CoreMinimal.h"
#include "RCBlueprintFunctionLibrary.h"
#include "RCTitleHUDBFL.generated.h"

class ARCTitleHUD;
class UDataTable;

UCLASS(Blueprintable)
class RC_API URCTitleHUDBFL : public URCBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCTitleHUDBFL();

    UFUNCTION(BlueprintCallable)
    static void SetTitleGalleryMovieEvent(bool bInMovieEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStartGalleryMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ARCTitleHUD* GetTitleHUD();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetTitleGalleryMovieEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetGalleryPlayMovieID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataTable* GetGalleryMovieSoundTable();
    
    UFUNCTION(BlueprintCallable)
    static void EndGalleryMovie();
    
};

