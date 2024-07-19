#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RCHUDLoadComponent_NotifyDelegate.h"
#include "RCHUDLoadComponent.generated.h"

class ARCUiFaderHUD;
class URCUiWidgetBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RC_API URCHUDLoadComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCUiFaderHUD* FaderHUD;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadStarted;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadAllWBPsCompleted;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadingWidgetsCompleted;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, EditFixedSize, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URCUiWidgetBase*> LoadingWidgets;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCHUDLoadComponent_Notify OnLoadCompleted;
    
    URCHUDLoadComponent(const FObjectInitializer& ObjectInitializer);

};

