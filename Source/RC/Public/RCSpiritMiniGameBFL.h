#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCSpiritMiniGameBFL.generated.h"

class ARCSpiritMiniGameManager;

UCLASS(Blueprintable)
class RC_API URCSpiritMiniGameBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCSpiritMiniGameBFL();

    UFUNCTION(BlueprintCallable)
    static void SetSpiritMiniGameEnvironment(ARCSpiritMiniGameManager* InSpiritMiniGameManager);
    
    UFUNCTION(BlueprintCallable)
    static void ResumeSpiritMiniGameData(const int32 InResumeCheckPointNumber);
    
    UFUNCTION(BlueprintCallable)
    static void ReleaseSpiritMiniGameEnvironment();
    
    UFUNCTION(BlueprintCallable)
    static void ProcessAfterReturn();
    
    UFUNCTION(BlueprintCallable)
    static ARCSpiritMiniGameManager* GetSpiritMiniGameManager();
    
    UFUNCTION(BlueprintCallable)
    static bool GetResume();
    
    UFUNCTION(BlueprintCallable)
    static FVector GetHitWanderingSpiritPos();
    
    UFUNCTION(BlueprintCallable)
    static bool GetHitWanderingSpirit();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCheckPointNumber();
    
    UFUNCTION(BlueprintCallable)
    static FVector GetCheckPoint();
    
};

