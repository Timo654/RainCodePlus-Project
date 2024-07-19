#pragma once
#include "CoreMinimal.h"
#include "ERCSkillType.h"
#include "RCVariableGameMenuSkillInfo.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCVariableGameMenuSkillInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SkillID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCSkillType SkillType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAcquired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEquip;
    
    FRCVariableGameMenuSkillInfo();
};

