#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERCMovieQuality.h"
#include "ERCOptionCharacterDraw.h"
#include "ERCOptionMobQuality.h"
#include "ERCOptionSubLevel.h"
#include "ERCOptionUiQuality.h"
#include "ERCSaveDataType.h"
#include "ERCStoryMode.h"
#include "ERCVoiceLanguage.h"
#include "RCSaveSlotInfo.h"
#include "RCSaveGameBFL.generated.h"

UCLASS(Blueprintable)
class RC_API URCSaveGameBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCSaveGameBFL();

    UFUNCTION(BlueprintCallable)
    static bool StartSave_SystemData();
    
    UFUNCTION(BlueprintCallable)
    static bool StartSave_SaveGameDataStoryMode(ERCStoryMode InStoryMode, ERCSaveDataType InType, int32 InSlot);
    
    UFUNCTION(BlueprintCallable)
    static bool StartSave_SaveGameDataNazoManualSave(ERCSaveDataType InType, int32 InSlot);
    
    UFUNCTION(BlueprintCallable)
    static bool StartSave_SaveGameDataMemory();
    
    UFUNCTION(BlueprintCallable)
    static bool StartSave_SaveGameData(ERCSaveDataType InType, int32 InSlot);
    
    UFUNCTION(BlueprintCallable)
    static bool StartSave_DevelopmentData();
    
    UFUNCTION(BlueprintCallable)
    static bool StartSave_AutoSaveGameDataStoryMode(ERCStoryMode InStoryMode);
    
    UFUNCTION(BlueprintCallable)
    static bool StartSave_AutoSaveGameData();
    
    UFUNCTION(BlueprintCallable)
    static bool StartLoad_SystemeData();
    
    UFUNCTION(BlueprintCallable)
    static bool StartLoad_SaveGameDataStoryMode(ERCStoryMode InStoryMode, ERCSaveDataType InType, int32 InSlot);
    
    UFUNCTION(BlueprintCallable)
    static bool StartLoad_SaveGameDataMemory();
    
    UFUNCTION(BlueprintCallable)
    static bool StartLoad_SaveGameData(ERCSaveDataType InType, int32 InSlot);
    
    UFUNCTION(BlueprintCallable)
    static bool StartLoad_LastSaveGameData(ERCStoryMode InStoryMode);
    
    UFUNCTION(BlueprintCallable)
    static bool StartLoad_DevelopmentData();
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerControllerInfo();
    
    UFUNCTION(BlueprintCallable)
    static void SetOptionSubLevelQuality(ERCOptionSubLevel InOptionSubLevel);
    
    UFUNCTION(BlueprintCallable)
    static void SetOptionMovieQuality(ERCMovieQuality InMovieQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SetOptionMobQuality(ERCOptionMobQuality InMobQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SetOptionCharacterDraw(ERCOptionCharacterDraw InOptionCharacterDraw);
    
    UFUNCTION(BlueprintCallable)
    static void RestartPlayerMove();
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayerMove();
    
    UFUNCTION(BlueprintCallable)
    static bool IsFinished();
    
    UFUNCTION(BlueprintCallable)
    static bool IsError();
    
    UFUNCTION(BlueprintCallable)
    static ERCVoiceLanguage GetOptionVoiceLanguage();
    
    UFUNCTION(BlueprintCallable)
    static ERCOptionUiQuality GetOptionUiQuality();
    
    UFUNCTION(BlueprintCallable)
    static ERCOptionSubLevel GetOptionSubLevelQuality();
    
    UFUNCTION(BlueprintCallable)
    static ERCMovieQuality GetOptionMovieQuality();
    
    UFUNCTION(BlueprintCallable)
    static ERCOptionMobQuality GetOptionMobQuality();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetOptionFinaleSkipEnable();
    
    UFUNCTION(BlueprintCallable)
    static ERCOptionCharacterDraw GetOptionCharacterDraw();
    
    UFUNCTION(BlueprintCallable)
    static FString GetErrorText();
    
    UFUNCTION(BlueprintCallable)
    static int32 Get_SaveGameDataList(TArray<FRCSaveSlotInfo>& OutSlotList);
    
    UFUNCTION(BlueprintCallable)
    static bool Check_SaveGameDataStoryMode(ERCStoryMode InStoryMode);
    
    UFUNCTION(BlueprintCallable)
    static bool Check_SaveGameData();
    
};

