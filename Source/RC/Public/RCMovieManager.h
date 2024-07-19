#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FinishedEventDelegate.h"
#include "LoadedEventDelegate.h"
#include "StartLoadEventDelegate.h"
#include "RCMovieManager.generated.h"

class UManaSource;
class UManaTexture;
class UMaterial;
class UMaterialInstanceDynamic;
class URCManaComponent;
class URCUserWidget;

UCLASS(Blueprintable)
class RC_API ARCMovieManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadedEvent OnLoadedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinishedEvent OnFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartLoadEvent OnStartLoadEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCManaComponent* ManaComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UManaSource* MovieSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UManaTexture* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUserWidget* Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 bpMovieIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isUpdateBpMovieIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isLoadFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCallPlayEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float skipButtonCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float skipTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isOpening;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 debugMovieStatusIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCheckPreparing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isBeforeSkipEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCheckFinishFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isDispSkipGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isDebugMovieSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> movieDataPathArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isStartLoad;
    
public:
    ARCMovieManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void WidgetToRemoveFromViewport();
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateSkipGauge();
    
public:
    UFUNCTION(BlueprintCallable)
    void Update(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetSkipTime(float skipTime);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetRain(bool isPlay);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetOpeningFlag(bool NewIsOpening);
    
    UFUNCTION(BlueprintCallable)
    void SetMovieData(const FString& _movieID, URCUserWidget* _widget, URCManaComponent* _manaComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetIsLoop(bool _isloop);
    
    UFUNCTION(BlueprintCallable)
    void ResetSkipGauge();
    
    UFUNCTION(BlueprintCallable)
    void ResetLoadedMovieData();
    
    UFUNCTION(BlueprintCallable)
    void ResetBeforeLoadMovieData();
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* ReadyMovieMaterial();
    
    UFUNCTION(BlueprintCallable)
    void PlayMovie();
    
    UFUNCTION(BlueprintCallable)
    void Pause(bool IsPause);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlaying();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayEnd();
    
    UFUNCTION(BlueprintCallable)
    bool IsLoadedMovie();
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    float GetMovieTime();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsLoop();
    
private:
    UFUNCTION(BlueprintCallable)
    bool CheckSkipButtonCount(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void CheckSkip(float DeltaTime);
    
};

