#pragma once
#include "CoreMinimal.h"
#include "RCVariableGameMenuQuestInfo.h"
#include "RCVariableGameMenuQuestMenuInfo.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCVariableGameMenuQuestMenuInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMainQuestAccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubQuestAccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCVariableGameMenuQuestInfo> MainQuestList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCVariableGameMenuQuestInfo> SubQuestList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCVariableGameMenuQuestInfo> DlcQuestList;
    
    FRCVariableGameMenuQuestMenuInfo();
};

