#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCVariableGameMenuQuestMenuInfo.h"
#include "RCVariableGameMenuQuest.generated.h"

UCLASS(Blueprintable)
class RC_API URCVariableGameMenuQuest : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableGameMenuQuestMenuInfo QuestMenuInfo;
    
public:
    URCVariableGameMenuQuest();

};

