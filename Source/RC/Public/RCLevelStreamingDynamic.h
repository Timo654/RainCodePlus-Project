#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelStreaming.h"
#include "RCLevelStreamingDynamic.generated.h"

class UObject;
class URCLevelStreamingDynamic;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCLevelStreamingDynamic : public ULevelStreaming {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInitiallyLoaded: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInitiallyVisible: 1;
    
public:
    URCLevelStreamingDynamic();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnLoadLevelInstance(UObject* WorldContextObject, URCLevelStreamingDynamic* StreamingLevel, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static URCLevelStreamingDynamic* LoadLevelInstance(UObject* WorldContextObject, const FString& LevelName, bool bInInitiallyVisible, bool& bOutSuccess);
    
};

