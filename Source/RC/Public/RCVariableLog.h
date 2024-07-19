#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCVariableLogList.h"
#include "RCVariableLog.generated.h"

UCLASS(Blueprintable)
class RC_API URCVariableLog : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableLogList BacklogInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBacklogAdd;
    
public:
    URCVariableLog();

};

