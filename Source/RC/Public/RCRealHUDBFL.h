#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERCAdvHUDTalkWindowType.h"
#include "RCRealHUDBFL.generated.h"

class ARCReHUD;
class UDataTable;

UCLASS(Blueprintable)
class RC_API URCRealHUDBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCRealHUDBFL();

    UFUNCTION(BlueprintCallable)
    static void StartSelect(int32 SelectMax, FName QuestionTextID);
    
    UFUNCTION(BlueprintCallable)
    static void StartMessage2(int32 InCharacterFaceID, int32 InCharacterFacialID, FName InMassageTextID, FName InPartVoiceID);
    
    UFUNCTION(BlueprintCallable)
    static void StartFreeMove();
    
    UFUNCTION(BlueprintCallable)
    static void SoundNovelStart(bool& bSucceeded, UDataTable* SoundNovelDataTable, bool bShowBackgroundFade);
    
    UFUNCTION(BlueprintCallable)
    static void SoundNovelShowBackgroundFade(bool& bSucceeded, bool bShow);
    
    UFUNCTION(BlueprintCallable)
    static void SetSelectSetting(int32 SelectNum, FName InSelectTextID, bool bCheckMark);
    
    UFUNCTION(BlueprintCallable)
    static void OpenMessageWindow2(ERCAdvHUDTalkWindowType WindowType);
    
    UFUNCTION(BlueprintCallable)
    static bool IsTalkStart();
    
    UFUNCTION(BlueprintCallable)
    static bool IsOpenMessageWindowSync();
    
    UFUNCTION(BlueprintCallable)
    static bool IsEndMessageWindowSync();
    
    UFUNCTION(BlueprintCallable)
    static bool IsCloseMessageWindowSync();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSelectResult();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ARCReHUD* GetReHUD();
    
    UFUNCTION(BlueprintCallable)
    static void EndFreeMove();
    
    UFUNCTION(BlueprintCallable)
    static void CloseMessageWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CheckSoundNovelFinished(bool& bFinished);
    
};

