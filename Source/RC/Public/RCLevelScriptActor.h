#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "RCLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class RC_API ARCLevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UClass*> LoadedAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bParsistant;
    
public:
    ARCLevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void LoadAssets(const TArray<TSoftClassPtr<UObject>>& InAssets);
    
};

