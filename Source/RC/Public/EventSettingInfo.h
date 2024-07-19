#pragma once
#include "CoreMinimal.h"
#include "EventSettingInfo.generated.h"

USTRUCT(BlueprintType)
struct FEventSettingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Filename;
    
    RC_API FEventSettingInfo();
};

