#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RCCharacterFacialDataAsset.generated.h"

UCLASS(Blueprintable)
class RC_API URCCharacterFacialDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Records;
    
    URCCharacterFacialDataAsset();

    UFUNCTION(BlueprintCallable)
    void Reimport();
    
};

