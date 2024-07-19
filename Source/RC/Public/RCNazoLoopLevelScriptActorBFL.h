#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCNazoLoopLevelScriptActorBFL.generated.h"

class ARCNazoLoopLevelScriptActor;

UCLASS(Blueprintable)
class RC_API URCNazoLoopLevelScriptActorBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCNazoLoopLevelScriptActorBFL();

    UFUNCTION(BlueprintCallable)
    static bool IsInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ARCNazoLoopLevelScriptActor* GetLoopLevelScriptActor();
    
};

