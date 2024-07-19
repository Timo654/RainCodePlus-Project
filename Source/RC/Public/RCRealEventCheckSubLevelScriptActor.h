#pragma once
#include "CoreMinimal.h"
#include "RCRealEventCheckSubLevelScriptActorEventCheckDelegate.h"
#include "RCRealEventSubLevelScriptActor.h"
#include "RCRealEventCheckSubLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class RC_API ARCRealEventCheckSubLevelScriptActor : public ARCRealEventSubLevelScriptActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CheckActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEventThrough;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCRealEventCheckSubLevelScriptActorEventCheck OnEventCheck;
    
    ARCRealEventCheckSubLevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEventThrough();
    
    UFUNCTION(BlueprintCallable)
    bool IsEventThrough();
    
    UFUNCTION(BlueprintCallable)
    FName GetCheckActorName();
    
    UFUNCTION(BlueprintCallable)
    void ClearEventThrough();
    
};

