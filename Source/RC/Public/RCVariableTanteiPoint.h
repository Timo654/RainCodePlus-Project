#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCVariableTanteiSystemInfo.h"
#include "RCVariableTanteiPoint.generated.h"

UCLASS(Blueprintable)
class RC_API URCVariableTanteiPoint : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableTanteiSystemInfo TanteiSystemInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugTotalSkillPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugSkillSlot;
    
public:
    URCVariableTanteiPoint();

};

