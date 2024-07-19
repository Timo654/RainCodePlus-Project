#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERCGameMenuMapM03IconType.h"
#include "ERCGameMenuMapM07IconType.h"
#include "ERCGameMenuPlayerIconType.h"
#include "ERCGameMenuQuestStatus.h"
#include "ERCGameMenuType.h"
#include "RCVariableGameMenuBFL.generated.h"

UCLASS(Blueprintable)
class RC_API URCVariableGameMenuBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCVariableGameMenuBFL();

    UFUNCTION(BlueprintCallable)
    static bool SetTopMenuID(FName InMenuID);
    
    UFUNCTION(BlueprintCallable)
    static void SetQuestFailure(FName InQuestID);
    
    UFUNCTION(BlueprintCallable)
    static void SetQuestComplete(FName InQuestID);
    
    UFUNCTION(BlueprintCallable)
    static bool SetQuestCheckActor(FName InQuestID, FName InActorName);
    
    UFUNCTION(BlueprintCallable)
    static void SetAllSubQuestFailure();
    
    UFUNCTION(BlueprintCallable)
    static void ResetTopMenu(int32 InChapter, FName InScene);
    
    UFUNCTION(BlueprintCallable)
    static void ResetHP();
    
    UFUNCTION(BlueprintCallable)
    static void RemoveKaikagi(FName InKaiKagiID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsTutorial(FName InTutorialID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsTanteiPointDraw();
    
    UFUNCTION(BlueprintCallable)
    static bool IsQuestCheckActor(FName InQuestID, FName InActorName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayerUnknown();
    
    UFUNCTION(BlueprintCallable)
    static bool IsFastTravel();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDrawWorldMap();
    
    UFUNCTION(BlueprintCallable)
    static bool IsAllQuestCheckActor(FName InQuestID);
    
    UFUNCTION(BlueprintCallable)
    static ERCGameMenuType GetTopMenuType();
    
    UFUNCTION(BlueprintCallable)
    static ERCGameMenuQuestStatus GetQuestStatus(FName InQuestID);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetQuestPhase(FName InQuestID);
    
    UFUNCTION(BlueprintCallable)
    static ERCGameMenuPlayerIconType GetPlayerIconType();
    
    UFUNCTION(BlueprintCallable)
    static FName GetNowMainQuestID();
    
    UFUNCTION(BlueprintCallable)
    static ERCGameMenuMapM07IconType GetMapM07IconType();
    
    UFUNCTION(BlueprintCallable)
    static ERCGameMenuMapM03IconType GetMapM03IconType();
    
    UFUNCTION(BlueprintCallable)
    static void ClearKaikagiList();
    
    UFUNCTION(BlueprintCallable)
    static void CheckListTable();
    
    UFUNCTION(BlueprintCallable)
    static void AddTutorial(FName InTutorialID);
    
    UFUNCTION(BlueprintCallable)
    static void AddQuest(FName InQuestID, int32 InPhase);
    
    UFUNCTION(BlueprintCallable)
    static void AddKaikagi(FName InKaiKagiID, int32 InPhase);
    
    UFUNCTION(BlueprintCallable)
    static void AddGlossary(FName InGlossaryID, int32 InPhase);
    
    UFUNCTION(BlueprintCallable)
    static void AddCharacter(FName InCharacterID, int32 InPhase);
    
};

