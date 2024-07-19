#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERCNazoBattleKaijinPartVoiceType.h"
#include "ERCNazoBattleLSARebuttalAttackFailureType.h"
#include "RCNazoBattleLSARebuttalData.h"
#include "RCNazoBattleSettings.h"
#include "RCNazoBattleLevelScriptActorBFL.generated.h"

class ARCNazoBattleLevelScriptActor;

UCLASS(Blueprintable)
class RC_API URCNazoBattleLevelScriptActorBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCNazoBattleLevelScriptActorBFL();

    UFUNCTION(BlueprintCallable)
    static bool SetBattleInputEnable(bool bInputEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool IsBattleInitialized();
    
    UFUNCTION(BlueprintCallable)
    static bool IsBattle();
    
    UFUNCTION(BlueprintCallable)
    static bool GetPreEventPartVoiceKaijinTag(FName& KaijinTag);
    
    UFUNCTION(BlueprintCallable)
    static bool GetKaijinPartVoiceID(FName& PartVoiceID, float& DelayTime, ERCNazoBattleKaijinPartVoiceType PartVoiceType, FName KaijinTag);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDefaultKaijinPartVoiceID(FName& PartVoiceID, float& DelayTime, ERCNazoBattleKaijinPartVoiceType PartVoiceType);
    
    UFUNCTION(BlueprintCallable)
    static FRCNazoBattleSettings GetBattleSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ARCNazoBattleLevelScriptActor* GetBattleLevelScriptActor();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FRCNazoBattleLSARebuttalData> GetActiveRebuttalDataArray();
    
    UFUNCTION(BlueprintCallable)
    static bool BattleStartUI_Start();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BattleStartUI_IsFinished();
    
    UFUNCTION(BlueprintCallable)
    static bool BattleRebuttalResetPosition();
    
    UFUNCTION(BlueprintCallable)
    static bool BattleRebuttalEndPhase();
    
    UFUNCTION(BlueprintCallable)
    static bool BattleRebuttalEndCloseContest(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    static bool BattleHintUI_Start(FName HintTextId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BattleHintUI_IsFinished();
    
    UFUNCTION(BlueprintCallable)
    static bool BattleGetRebuttalPhaseParameter_PreEvent(FName& TalkID);
    
    UFUNCTION(BlueprintCallable)
    static bool BattleGetRebuttalPhaseParameter_NextRebuttalEvent(int32& RebuttalGroupNo, FName& TalkID);
    
    UFUNCTION(BlueprintCallable)
    static bool BattleGetRebuttalPhaseParameter_Interval(int32& RebuttalGroupNo, FName& TalkID);
    
    UFUNCTION(BlueprintCallable)
    static bool BattleGetRebuttalPhaseParameter_GameOver(int32& RebuttalGroupNo, int32& RebuttalNo, FName& TalkID, FName& HintTextId);
    
    UFUNCTION(BlueprintCallable)
    static bool BattleGetRebuttalPhaseParameter_Confrontation(int32& RebuttalGroupNo, bool& bFirstChallenge, FName& TalkID);
    
    UFUNCTION(BlueprintCallable)
    static bool BattleGetRebuttalPhaseParameter_CloseContest(int32& RebuttalGroupNo, int32& RebuttalNo, float& InputTime, int32& InputCount, int32& FailureDamage);
    
    UFUNCTION(BlueprintCallable)
    static bool BattleGetRebuttalPhaseParameter_ClearEvent(FName& TalkID, TArray<FName>& TalkIDArray);
    
    UFUNCTION(BlueprintCallable)
    static bool BattleGetRebuttalPhaseParameter_AttackSuccess(int32& RebuttalGroupNo, int32& RebuttalNo, FName& TalkID);
    
    UFUNCTION(BlueprintCallable)
    static bool BattleGetRebuttalPhaseParameter_AttackFailure(int32& RebuttalGroupNo, int32& RebuttalNo, ERCNazoBattleLSARebuttalAttackFailureType& FailureType, FName& TalkID);
    
    UFUNCTION(BlueprintCallable)
    static void BattleGetCurrentRebuttalGroupNo(int32& RebuttalGroupNo);
    
    UFUNCTION(BlueprintCallable)
    static bool BattleGameOverUI_Start();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BattleGameOverUI_IsFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BattleGameOverUI_GetSelectedIndex();
    
    UFUNCTION(BlueprintCallable)
    static bool BattleAllRebuttalLetterForceFinish();
    
};

