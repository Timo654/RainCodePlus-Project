#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPageMoveVisibleDirection.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiFinalePageMoveLayoutWidget.generated.h"

class USizeBox;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiFinalePageMoveLayoutWidget : public URCUiWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBox_2;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_VisibleLR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_VisibleL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_VisibleR;
    
public:
    URCNzUiFinalePageMoveLayoutWidget();

    UFUNCTION(BlueprintCallable)
    void GetPageMoveIconLocationAndSize(FVector2D& Location, FVector2D& Size);
    
    UFUNCTION(BlueprintCallable)
    void ChangeVisiblePageMoveIcons(EPageMoveVisibleDirection dir);
    
};

