#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCSceneChangeMediator.generated.h"

class URCNzSceneChangeLoadingScreen;
class URCReSceneChangeLoadingScreen;
class URCUiNzSceneChange;
class URCUiNzSceneChangeLoading;
class URCUiReSceneChange;
class URCUiReSceneChangeLoading;
class URCUiSceneChange;

UCLASS(Blueprintable)
class RC_API URCSceneChangeMediator : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiReSceneChangeLoading* ReSceneChangeLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiReSceneChange* ReSceneChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiNzSceneChangeLoading* NzSceneChangeLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiNzSceneChange* NzSceneChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCUiSceneChange* SceneChangeNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCUiSceneChange* SceneChangeLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCReSceneChangeLoadingScreen* ReSceneChangeLoadingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCNzSceneChangeLoadingScreen* NzSceneChangeLoadingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* OpenedSceneChangeObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ExtendSceneChangeObjectList;
    
public:
    URCSceneChangeMediator();

};

