#pragma once
#include "CoreMinimal.h"
#include "RCRealEventSubLevelScriptActor.h"
#include "RCRealEventTalkSubLevelScriptActorEventTalkDelegate.h"
#include "RCRealEventTalkSubLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class RC_API ARCRealEventTalkSubLevelScriptActor : public ARCRealEventSubLevelScriptActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalkCharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEventThrough;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCRealEventTalkSubLevelScriptActorEventTalk OnEventTalk;
    
    ARCRealEventTalkSubLevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEventThrough();
    
    UFUNCTION(BlueprintCallable)
    bool IsEventThrough();
    
    UFUNCTION(BlueprintCallable)
    FName GetTalkCharacterName();
    
    UFUNCTION(BlueprintCallable)
    void ClearEventThrough();
    
};

