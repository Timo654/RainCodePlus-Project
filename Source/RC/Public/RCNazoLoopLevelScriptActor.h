#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "RCNazoLoopLevelScriptActor.generated.h"

class ARCNazoLevelScriptActor;

UCLASS(Blueprintable)
class RC_API ARCNazoLoopLevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARCNazoLevelScriptActor* NazoLSA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
public:
    ARCNazoLoopLevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool IsInitialized();
    
};

