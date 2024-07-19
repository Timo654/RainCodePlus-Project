#pragma once
#include "CoreMinimal.h"
#include "RCMenuButton.h"
#include "RCMenuCollectionListBar.generated.h"

class URCMenuCollectionListBarClose;
class URCMenuCollectionListBarOpen;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCMenuCollectionListBar : public URCMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCMenuCollectionListBarClose* ListBar_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCMenuCollectionListBarOpen* ListBar_Open;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Open;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Close;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isMouseCurrentSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCurrentPressDecide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isSelectedAnimation;
    
public:
    URCMenuCollectionListBar();

};

