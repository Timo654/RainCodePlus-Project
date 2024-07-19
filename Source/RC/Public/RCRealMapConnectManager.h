#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ERCCSVDataAssetIndex.h"
#include "RCRealMapConnectManager.generated.h"

UCLASS(Blueprintable)
class RC_API URCRealMapConnectManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Chapter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SceneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERCCSVDataAssetIndex> EventSceneMapConnectInfoIndexList;
    
public:
    URCRealMapConnectManager();

};

