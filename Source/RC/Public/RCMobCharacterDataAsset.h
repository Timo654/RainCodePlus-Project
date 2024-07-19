#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RCMobCharacterDataAsset.generated.h"

UCLASS(Blueprintable)
class RC_API URCMobCharacterDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> KakiwariBPPathList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SoldierDataList;
    
    URCMobCharacterDataAsset();

};

