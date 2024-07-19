#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERCEnvironmentChangeRainType.h"
#include "ERCEnvironmentChangeSpeedType.h"
#include "RCEnvironmentBFL.generated.h"

class ARCCharacterRender;
class ARCEnvironmentChangeTrigger;

UCLASS(Blueprintable)
class RC_API URCEnvironmentBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCEnvironmentBFL();

    UFUNCTION(BlueprintCallable)
    static void SetDefautMaterialD();
    
    UFUNCTION(BlueprintCallable)
    static void SetDefautFogID();
    
    UFUNCTION(BlueprintCallable)
    static void SetDefaultPlayerMoveType();
    
    UFUNCTION(BlueprintCallable)
    static void SearchFogActor();
    
    UFUNCTION(BlueprintCallable)
    static void Reset();
    
    UFUNCTION(BlueprintCallable)
    static void LoadRecovery();
    
    UFUNCTION(BlueprintCallable)
    static ERCEnvironmentChangeRainType GetRainDraw();
    
    UFUNCTION(BlueprintCallable)
    static ERCEnvironmentChangeSpeedType GetPlayerMoveSpeed();
    
    UFUNCTION(BlueprintCallable)
    static FName GetMinimapID();
    
    UFUNCTION(BlueprintCallable)
    static FName GetFogID();
    
    UFUNCTION(BlueprintCallable)
    static ARCEnvironmentChangeTrigger* GetEnvironmentChangeTrigger(FName InName);
    
    UFUNCTION(BlueprintCallable)
    static FName GetCamera();
    
    UFUNCTION(BlueprintCallable)
    static FName GetAreaNameID();
    
    UFUNCTION(BlueprintCallable)
    static void ChangeWind(FName InWindActorName, FName InWindEventName);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeShinigamiMaterialID(ARCCharacterRender* InCharacterActor, FName InPlayerMaterialID, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeRainDraw(ERCEnvironmentChangeRainType InRainType);
    
    UFUNCTION(BlueprintCallable)
    static void ChangePlayerMoveSpeed(ERCEnvironmentChangeSpeedType InSpeedType);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeMinimapID(FName InMinimapID);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeFogID(FName InFogID, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeFaceFilterID(FName InFaceFilterID);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeCharacterRainMaterialID(ARCCharacterRender* InCharacterActor, ERCEnvironmentChangeRainType InRainType, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeCharacterMaterialID(ARCCharacterRender* InCharacterActor, FName InPlayerMaterialID, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeCharacterDrawLayerList(TArray<FName> IncharacterDrawLayerList);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeCamera(FName InCameraID, bool bDirect);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeAreaNameID(FName InAreaNameID);
    
};

