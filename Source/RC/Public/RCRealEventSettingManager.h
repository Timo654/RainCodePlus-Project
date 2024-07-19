#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCRealEventSettingManager.generated.h"

class URCParamRealEventSettingDataAsset;

UCLASS(Blueprintable)
class RC_API URCRealEventSettingManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URCParamRealEventSettingDataAsset*> SettingList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SettingChapterNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SettingSceneID;
    
public:
    URCRealEventSettingManager();

};

