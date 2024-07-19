#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERCFadeType.h"
#include "ERCSceneChangeType.h"
#include "RCBlueprintFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class RC_API URCBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void ToggleTipsScreenDebugPrintFlag_Debug();
    
    UFUNCTION(BlueprintCallable)
    static void ToggleDebugMenu();
    
    UFUNCTION(BlueprintCallable)
    static void StopLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    static void StartTipsScreen_Debug();
    
    UFUNCTION(BlueprintCallable)
    static bool StartShortLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    static void StartScreenFadeOut(float Duration, const FLinearColor Color, ERCFadeType InType);
    
    UFUNCTION(BlueprintCallable)
    static void StartScreenFadeIn(float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void StartSceneChange(ERCSceneChangeType Type);
    
    UFUNCTION(BlueprintCallable)
    static void StartNextSubLevel();
    
    UFUNCTION(BlueprintCallable)
    static bool StartLongLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerPauseMoveTest(bool bInFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetPauseEnable(bool bInFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetPause(bool bInFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetLoadDisplayNum(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    static void SetLoadCompletePlayerWarp();
    
    UFUNCTION(BlueprintCallable)
    static bool IsScreenFadeTypeUi();
    
    UFUNCTION(BlueprintCallable)
    static bool IsScreenFadeOut();
    
    UFUNCTION(BlueprintCallable)
    static bool IsScreenFade();
    
    UFUNCTION(BlueprintCallable)
    static bool IsRealSceneChangePLChange();
    
    UFUNCTION(BlueprintCallable)
    static bool IsPauseEnable();
    
    UFUNCTION(BlueprintCallable)
    static bool IsPause();
    
    UFUNCTION(BlueprintCallable)
    static bool IsOpenSpUEDebugMenu();
    
    UFUNCTION(BlueprintCallable)
    static bool IsOpenDebugMenu();
    
    UFUNCTION(BlueprintCallable)
    static bool IsMapMoveNotRealPlChange();
    
    UFUNCTION(BlueprintCallable)
    static bool IsLoadComplete();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDisableChangeSubLevel();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDevelopmentBuild();
    
    UFUNCTION(BlueprintCallable)
    static bool IsAssetAllLoadComplete();
    
    UFUNCTION(BlueprintCallable)
    static void InitRealLevelOpen();
    
    UFUNCTION(BlueprintCallable)
    static void InitLoadingScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSvnRevisionNumberRCDev();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSvnRevisionNumberRC();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSvnCommitDateRCDev();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSvnCommitDateRC();
    
    UFUNCTION(BlueprintCallable)
    static void EndTipsScreen_Debug();
    
};

