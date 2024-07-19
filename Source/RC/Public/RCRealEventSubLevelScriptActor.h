#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "RCRealEventSubLevelScriptActorLoadEndDelegate.h"
#include "RCRealEventSubLevelScriptActorOnSelectCursolDelegate.h"
#include "RCRealEventSubLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class RC_API ARCRealEventSubLevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectCursolIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRelease;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCRealEventSubLevelScriptActorLoadEnd OnEventLoadEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCRealEventSubLevelScriptActorOnSelectCursol OnEventSelectCursol;
    
    ARCRealEventSubLevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    int32 GetSelectCursolIndex();
    
};

