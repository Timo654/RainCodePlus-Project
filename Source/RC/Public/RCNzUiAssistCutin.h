#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERCNzUiAssistCutinStatus.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiAssistCutin.generated.h"

class UImage;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiAssistCutin : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Img_NzAssistCutIn_Face;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadingImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath AssistImagePath;
    
public:
    URCNzUiAssistCutin();
    bool bChangeSpeed;
    UFUNCTION(BlueprintCallable)
    void UninitializeAssistCutin();
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void InitializeAssistCutin(FSoftObjectPath InAssistImagePath);
    
    UFUNCTION(BlueprintCallable)
    ERCNzUiAssistCutinStatus GetAssistCutinStatus();
    
};

