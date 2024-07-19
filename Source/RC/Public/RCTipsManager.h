#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TipsInfo.h"
#include "RCTipsManager.generated.h"

UCLASS(Blueprintable)
class RC_API URCTipsManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTipsInfo> TipsDrawList;
    
public:
    URCTipsManager();

};

