#pragma once
#include "CoreMinimal.h"
#include "RCNazoSceneTestLevelScriptActor.h"
#include "RCNazoMapViewerLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class RC_API ARCNazoMapViewerLevelScriptActor : public ARCNazoSceneTestLevelScriptActor {
    GENERATED_BODY()
public:
    ARCNazoMapViewerLevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleMenu();
    
    UFUNCTION(BlueprintCallable)
    void OpenMenu();
    
    UFUNCTION(BlueprintCallable)
    void CloseMenu();
    
};

