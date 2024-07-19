#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERCNzUiBattleCutinStatus.h"
#include "ERCNzUiBattleCutinType.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiBattleCutin.generated.h"

class UImage;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiBattleCutin : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Hajiki;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Assist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Ronpa;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Img_Assist_Face;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadingImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath AssistImagePath;
    
public:
    URCNzUiBattleCutin();

    UFUNCTION(BlueprintCallable)
    void UninitializeBattleCutin();
    
    UFUNCTION(BlueprintCallable)
    void Open(ERCNzUiBattleCutinType InType);
    
    UFUNCTION(BlueprintCallable)
    void InitializeBattleCutin(FSoftObjectPath InAssistImagePath);
    
    UFUNCTION(BlueprintCallable)
    ERCNzUiBattleCutinStatus GetBattleCutinStatus();
    
};

