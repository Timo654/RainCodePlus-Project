#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ERCAdvHUDPressedDecideResult.h"
#include "RCAdvHUDInteractIconComponent.generated.h"

class AActor;
class ARCAdvHUD;
class ARCCharacterRender;
class ARCCheckActor;
class ARCPawnRender;
class URCAdvHUDAdvComponent;
class URCAdvHUDMapComponent;
class URCAdvHUDResearchComponent;
class URCAdvHUDTalkComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RC_API URCAdvHUDInteractIconComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCAdvHUD* HUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInteractIconHiddenByTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D InteractIconSafeArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D InteractIconSafeAreaUpperLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D InteractIconSafeAreaLowerRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccessableWidgets1xDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AccessableWidgetsBasePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AccessableWidgetPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastAccessedWidgetActor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLastAccessedWidgetDelayCountFlag;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastAccessedWidgetDelayCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Fake3DHiddenDistanceFromCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCAdvHUDAdvComponent* AdvComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCAdvHUDTalkComponent* TalkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCAdvHUDResearchComponent* ResearchComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCAdvHUDMapComponent* MapComponent;
    
public:
    URCAdvHUDInteractIconComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool PressedDecideButtonSimple();
    
    UFUNCTION(BlueprintCallable)
    ERCAdvHUDPressedDecideResult PressedDecideButton();
    
    UFUNCTION(BlueprintCallable)
    static bool GetPressedDecideButtonSimpleResult(ERCAdvHUDPressedDecideResult InResult);
    
    UFUNCTION(BlueprintCallable)
    ARCPawnRender* GetAccessedNPC();
    
    UFUNCTION(BlueprintCallable)
    ARCCheckActor* GetAccessedCheckActor();
    
    UFUNCTION(BlueprintCallable)
    ARCCharacterRender* GetAccessedCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAllAccessableWidgetsOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAllAccessableWidgetsClosed(bool bInContainClosing);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAccessedWidgetWait();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAccessableWidgetReady();
    
    UFUNCTION(BlueprintCallable)
    void AllAccessableWidgetsOpen();
    
    UFUNCTION(BlueprintCallable)
    void AllAccessableWidgetsClose();
    
};

