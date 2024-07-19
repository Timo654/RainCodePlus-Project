#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCNzSceneChangeLoadingScreen.generated.h"

class URCNzSceneChangeLoadingWidget;

UCLASS(Blueprintable)
class RC_API URCNzSceneChangeLoadingScreen : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzSceneChangeLoadingWidget* FadeWidget;
    
public:
    URCNzSceneChangeLoadingScreen();

};

