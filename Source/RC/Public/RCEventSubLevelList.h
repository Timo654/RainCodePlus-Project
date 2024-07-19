#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCEventSubLevelList.generated.h"

class URCParamEventSubLevelData;

UCLASS(Blueprintable)
class RC_API URCEventSubLevelList : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Filename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCParamEventSubLevelData* EventSubLevelList;
    
public:
    URCEventSubLevelList();

};

