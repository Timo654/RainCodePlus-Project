#pragma once
#include "CoreMinimal.h"
#include "ERCSaveDataType.h"
#include "ERCSaveLoadExecType.h"
#include "ERCStoryMode.h"
#include "RCSaveLoadExec.generated.h"

USTRUCT(BlueprintType)
struct FRCSaveLoadExec {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCSaveLoadExecType ExecType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCStoryMode StoryMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCSaveDataType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotNum;
    
    RC_API FRCSaveLoadExec();
};

