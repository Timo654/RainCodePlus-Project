#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "RCHUD.generated.h"

UCLASS(Blueprintable, NonTransient)
class RC_API ARCHUD : public AHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawHUDForDebug;
    
public:
    ARCHUD(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Exec)
    void DebugToggleDrawHUD();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetDrawHUD(bool in_bDraw);
    
    UFUNCTION(BlueprintCallable, Exec)
    bool DebugCheckDrawHUD();
    
};

