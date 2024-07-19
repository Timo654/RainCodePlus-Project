#pragma once
#include "CoreMinimal.h"
#include "RCNazoLevelManageData.generated.h"

class ULevelStreamingDynamic;
class UWorld;

USTRUCT(BlueprintType)
struct FRCNazoLevelManageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> LevelObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelStreamingDynamic* Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLevelInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SceneIDs;
    
    RC_API FRCNazoLevelManageData();
};

