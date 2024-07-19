#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCUiTutorialPager.generated.h"

class UHorizontalBox;
class URCUiButtonGuideParts;
class URCUiMenuAreaMapPagerItem;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiTutorialPager : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCUiButtonGuideParts* WBP_ButtonGuide_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCUiButtonGuideParts* WBP_ButtonGuide_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHorizontalBox* ItemHorizontalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCUiMenuAreaMapPagerItem* WBP_UI_Pager_Item_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCUiMenuAreaMapPagerItem* WBP_UI_Pager_Item_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCUiMenuAreaMapPagerItem* WBP_UI_Pager_Item_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<URCUiMenuAreaMapPagerItem*> PagerItemList;
    
public:
    URCUiTutorialPager();

};

