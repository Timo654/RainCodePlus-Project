#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RCCharacterFacialListDataAsset.generated.h"

UCLASS(Blueprintable)
class RC_API URCCharacterFacialListDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> Records;
    
    URCCharacterFacialListDataAsset();

    UFUNCTION(BlueprintCallable)
    void Reimport();
    
};

