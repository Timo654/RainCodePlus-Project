#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCCharacterSettingManager.generated.h"

class URCParamCharacterSettingDataAsset;

UCLASS(Blueprintable)
class RC_API URCCharacterSettingManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URCParamCharacterSettingDataAsset*> SettingList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> FilenameList;
    
public:
    URCCharacterSettingManager();

};

