#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ERCPALPlatform.h"
#include "RCPALData.h"
#include "RCNeverCookPrimaryAssetLabel.generated.h"

class UObject;

UCLASS(Blueprintable)
class RC_API URCNeverCookPrimaryAssetLabel : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> NeverCookAssets_Switch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> NeverCookAssets_PS5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> NeverCookAssets_XSX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> NeverCookAssets_Windows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> NeverCookAssetRegularExpressionPaths_Switch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> NeverCookAssetRegularExpressionPaths_PS5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> NeverCookAssetRegularExpressionPaths_XSX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> NeverCookAssetRegularExpressionPaths_Windows;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERCPALPlatform, FRCPALData> NeverCookAssetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsRuntimeLabel: 1;
    
    URCNeverCookPrimaryAssetLabel();

};

