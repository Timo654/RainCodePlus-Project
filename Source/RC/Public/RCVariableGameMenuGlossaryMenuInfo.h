#pragma once
#include "CoreMinimal.h"
#include "RCVariableGameMenuGlossaryInfo.h"
#include "RCVariableGameMenuTutorialInfo.h"
#include "RCVariableGameMenuGlossaryMenuInfo.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCVariableGameMenuGlossaryMenuInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCVariableGameMenuGlossaryInfo> GlossaryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCVariableGameMenuTutorialInfo> TutorialList;
    
    FRCVariableGameMenuGlossaryMenuInfo();
};

