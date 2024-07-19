#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiFinaleTimeLimitWidget.generated.h"

class UImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiFinaleTimeLimitWidget : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> TimerImageList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> NumTextureList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> NumHighTexturePathList;
    
public:
    URCNzUiFinaleTimeLimitWidget();

    UFUNCTION(BlueprintCallable)
    void SetTime(float Time);
    
    UFUNCTION(BlueprintCallable)
    void InitializeFinaleTimeLimitWidget();
    
};

