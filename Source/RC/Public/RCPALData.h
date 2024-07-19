#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCPALData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct RC_API FRCPALData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> NeverCookAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> NeverCookAssetPathPatterns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> NeverCookAssetPaths;
    
    FRCPALData();
};

