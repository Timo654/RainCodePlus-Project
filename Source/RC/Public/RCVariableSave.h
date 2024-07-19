#pragma once
#include "CoreMinimal.h"
#include "BusStopStatusFromAreamap.h"
#include "ERCRealEventMapConnectStatus.h"
#include "ERCStoryMode.h"
#include "GameLevelInfo.h"
#include "RCEnvironmentInfo.h"
#include "RCTimerInfo.h"
#include "RCVariableGameMenuCharacterMenuInfo.h"
#include "RCVariableGameMenuGlossaryMenuInfo.h"
#include "RCVariableGameMenuKaikagiMenuInfo.h"
#include "RCVariableGameMenuMapMenuInfo.h"
#include "RCVariableGameMenuPersonaMenuInfo.h"
#include "RCVariableGameMenuQuestMenuInfo.h"
#include "RCVariableGameMenuTopMenuInfo.h"
#include "RCVariableLogList.h"
#include "RCVariableNazoResultList.h"
#include "RCVariableSelectAlreadyAllInfo.h"
#include "RCVariableSave.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCVariableSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCStoryMode StoryMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameLevelInfo GameLevelInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> GameVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ChapterVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SceneVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MainQuestPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCRealEventMapConnectStatus BusStopStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBusStopStatusFromAreamap> BusStopStatusFromAreamap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDisableSubQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableSelectAlreadyAllInfo SelectAlreadyAllInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableNazoResultList ResultCurrentInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableLogList BacklogInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableGameMenuTopMenuInfo TopMenuInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableGameMenuMapMenuInfo MapMenuInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableGameMenuKaikagiMenuInfo KaikagiMenuInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableGameMenuQuestMenuInfo QuestMenuInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableGameMenuPersonaMenuInfo PersonaMenuInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableGameMenuCharacterMenuInfo CharacterMenuInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableGameMenuGlossaryMenuInfo SubStoryGlossaryMenuList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SaveLoadMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LastCameraTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpiritMiniGameCheckPointNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCEnvironmentInfo EnviromentInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCTimerInfo NazoCountDownTimerInfo;
    
    FRCVariableSave();
};

