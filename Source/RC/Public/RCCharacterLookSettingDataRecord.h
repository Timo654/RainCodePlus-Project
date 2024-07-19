#pragma once
#include "CoreMinimal.h"
#include "RCCharacterLookSetting.h"
#include "RCCharacterLookSettingDataRecord.generated.h"

USTRUCT(BlueprintType)
struct FRCCharacterLookSettingDataRecord {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCCharacterLookSetting> Records;
    
public:
    RC_API FRCCharacterLookSettingDataRecord();
};

