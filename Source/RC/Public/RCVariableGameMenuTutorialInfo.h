#pragma once
#include "CoreMinimal.h"
#include "RCVariableGameMenuTutorialInfo.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCVariableGameMenuTutorialInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TutorialID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNew;
    
    FRCVariableGameMenuTutorialInfo();
};

