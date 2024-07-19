#pragma once
#include "CoreMinimal.h"
#include "RCVariableGameMenuCharacterInfo.h"
#include "RCVariableGameMenuCharacterMenuInfo.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCVariableGameMenuCharacterMenuInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCVariableGameMenuCharacterInfo> CharacterList;
    
    FRCVariableGameMenuCharacterMenuInfo();
};

