#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCNzHUDBFL.generated.h"

class ARCNzHUD;

UCLASS(Blueprintable)
class RC_API URCNzHUDBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCNzHUDBFL();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ARCNzHUD* GetNzHUD();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetBattleCutinPriority(int32& Priority);
    
    UFUNCTION(BlueprintCallable)
    static void CountdownWidgetOpen(bool& bSucceeded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CountdownWidgetIsOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CountdownWidgetIsClosed();
    
    UFUNCTION(BlueprintCallable)
    static void CountdownWidgetClose(bool& bSucceeded, bool bTimerPause);
    
    UFUNCTION(BlueprintCallable)
    static void CountdownStop(bool& bSucceeded);
    
    UFUNCTION(BlueprintCallable)
    static void CountdownStartTime(bool& bSucceeded, int32 Hours, int32 Minutes, int32 Seconds, int32 Milliseconds, bool bWidgetOpen);
    
    UFUNCTION(BlueprintCallable)
    static void CountdownStartSecond(bool& bSucceeded, float Time, bool bWidgetOpen);
    
    UFUNCTION(BlueprintCallable)
    static void CountdownStartMillisecond(bool& bSucceeded, int32 Time, bool bWidgetOpen);
    
    UFUNCTION(BlueprintCallable)
    static void CountdownSetProgressAndTime(bool& bSucceeded, int32 Progress);
    
    UFUNCTION(BlueprintCallable)
    static void CountdownResume(bool& bSucceeded);
    
    UFUNCTION(BlueprintCallable)
    static void CountdownRelease(bool& bSucceeded);
    
    UFUNCTION(BlueprintCallable)
    static void CountdownPause(bool& bSucceeded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CountdownIsInitialized();
    
    UFUNCTION(BlueprintCallable)
    static void CountdownInitialize(bool& bSucceeded);
    
    UFUNCTION(BlueprintCallable)
    static void CountdownGetTime(bool& bSucceeded, int32& Hours, int32& Minutes, int32& Seconds, int32& Milliseconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CountdownGetSeconds();
    
    UFUNCTION(BlueprintCallable)
    static void CountdownGetProgressAndTime(bool& bSucceeded, int32& Progress, int32& Hours, int32& Minutes, int32& Seconds, int32& Milliseconds);
    
    UFUNCTION(BlueprintCallable)
    static void CountdownGetProgressAndSeconds(bool& bSucceeded, int32& Progress, float& Seconds);
    
    UFUNCTION(BlueprintCallable)
    static void CountdownGetProgressAndMilliseconds(bool& bSucceeded, int32& Progress, int32& Milliseconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CountdownGetMilliseconds();
    
};

