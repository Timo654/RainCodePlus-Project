#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "RCNazoSceneTestLevelScriptActor.h"
#include "RCNazoMotionViewerLevelScriptActor.generated.h"

class ARCCharacterRender;

UCLASS(Blueprintable)
class RC_API ARCNazoMotionViewerLevelScriptActor : public ARCNazoSceneTestLevelScriptActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARCCharacterRender* Chara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle ChangeNextTimerHandle;
    
public:
    ARCNazoMotionViewerLevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleMenu();
    
    UFUNCTION(BlueprintCallable)
    void OpenMenu();
    
    UFUNCTION(BlueprintCallable)
    void CloseMenu();
    
};

