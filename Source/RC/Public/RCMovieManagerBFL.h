#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCMovieManagerBFL.generated.h"

class UMaterialInstanceDynamic;
class URCManaComponent;
class URCUserWidget;

UCLASS(Blueprintable)
class RC_API URCMovieManagerBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCMovieManagerBFL();

    UFUNCTION(BlueprintCallable)
    static void WidgetToRemoveFromViewport();
    
    UFUNCTION(BlueprintCallable)
    static void Update();
    
    UFUNCTION(BlueprintCallable)
    static void SetSkipTime(float skipTime);
    
    UFUNCTION(BlueprintCallable)
    static void SetSaveDataMovieIndex(int32 MovieIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetOpeningMovieFLag(bool isOpening);
    
    UFUNCTION(BlueprintCallable)
    static void SetMovie(const FString& MovieID, URCUserWidget* Widget, URCManaComponent* ManaComponent);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsLoop(bool IsLoop);
    
    UFUNCTION(BlueprintCallable)
    static void SetBpMovieIndex(int32 MovieIndex);
    
    UFUNCTION(BlueprintCallable)
    static void ResetSkipGauge();
    
    UFUNCTION(BlueprintCallable)
    static void Reset();
    
    UFUNCTION(BlueprintCallable)
    static UMaterialInstanceDynamic* ReadyMovieMaterial();
    
    UFUNCTION(BlueprintCallable)
    static void PlayMovie();
    
    UFUNCTION(BlueprintCallable)
    static void Pause(bool IsPause);
    
    UFUNCTION(BlueprintCallable)
    static bool IsMoviePlaying();
    
    UFUNCTION(BlueprintCallable)
    static bool IsMovieEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMovieCansel();
    
    UFUNCTION(BlueprintCallable)
    static bool IsLoadedMovie();
    
    UFUNCTION(BlueprintCallable)
    static bool IsAssetLoading();
    
    UFUNCTION(BlueprintCallable)
    static float GetMovieTime();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMovieIndex();
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsLoop();
    
};

