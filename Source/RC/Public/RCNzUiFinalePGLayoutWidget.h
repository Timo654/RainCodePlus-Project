#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPageGuideType.h"
#include "ERCInputKeyType.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiFinalePGLayoutWidget.generated.h"

class URCNzUiFinalePageGuideWidget;
class URCUiButtonGuideParts;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiFinalePGLayoutWidget : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URCNzUiFinalePageGuideWidget*> PageGuideList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentPageIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D pgOverlaySize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D pgOverlayLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiButtonGuideParts* BtnGuidePartsL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiButtonGuideParts* BtnGuidePartsR;
    
public:
    URCNzUiFinalePGLayoutWidget();

    UFUNCTION(BlueprintCallable)
    void UpdatePageGuide(TArray<EPageGuideType> PageList);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonGuideClick(ERCInputKeyType KeyType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MovePage(const int32 targetIdx);
    
    UFUNCTION(BlueprintCallable)
    void InitializePGLayoutWidget(TArray<EPageGuideType> PageList);
    
    UFUNCTION(BlueprintCallable)
    bool InitializeButtonGuide(ERCInputKeyType keyL, ERCInputKeyType keyR);
    
    UFUNCTION(BlueprintCallable)
    void GetPGLayoutLocationAndSize(FVector2D& Location, FVector2D& Size);
    
};

