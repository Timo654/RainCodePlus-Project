#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCReSceneChangeLoadingScreen.generated.h"

class URCReSceneChangeLoadingWidget;

UCLASS(Blueprintable)
class RC_API URCReSceneChangeLoadingScreen : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCReSceneChangeLoadingWidget* FadeWidget;
    
public:
    URCReSceneChangeLoadingScreen();

};

