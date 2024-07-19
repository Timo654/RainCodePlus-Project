#pragma once
#include "CoreMinimal.h"
#include "Engine/LatentActionManager.h"
#include "RCAdvHUD.h"
#include "RCReHUDSelectData.h"
#include "RCAmatanHUD.generated.h"

class UImage;
class UObject;
class UTexture2D;
class UUserWidget;
class UWidget;
class UWidgetSwitcher;

UCLASS(Blueprintable, NonTransient)
class RC_API ARCAmatanHUD : public ARCAdvHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* Tablet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* VoiceWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* FaceWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* FaderWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UTexture2D*> VoiceMap;
    
    ARCAmatanHUD(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRobotComponentVisibility(bool Show);
    
    UFUNCTION(BlueprintCallable)
    bool SelectStartWithDataArray(TArray<FRCReHUDSelectData> InSelectDataArray, FName InQuestionTextID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSelectFinished();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void Ask(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FRCReHUDSelectData> InSelectDataArray, FName InQuestionTextID);
    
};

