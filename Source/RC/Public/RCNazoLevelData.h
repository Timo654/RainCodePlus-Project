#pragma once
#include "CoreMinimal.h"
#include "RCNazoLevelSettings.h"
#include "RCNazoLevelData.generated.h"

class ULevelStreamingDynamic;

USTRUCT(BlueprintType)
struct FRCNazoLevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoLevelSettings LevelSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelStreamingDynamic* Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLevelInstance;
    
    RC_API FRCNazoLevelData();
};

