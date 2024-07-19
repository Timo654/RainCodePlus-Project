#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AttbAsset.generated.h"

UCLASS(Blueprintable)
class RC_API UAttbAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<int32> presetValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FString> ObjectValue;
    
    UAttbAsset();

};

