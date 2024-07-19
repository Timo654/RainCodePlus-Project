#pragma once
#include "CoreMinimal.h"
#include "ERCInputKeyType.h"
#include "RCUiWidgetBase.h"
#include "RCUiMenuAreaMap.generated.h"

class UDataTable;
class URCParamMenuWorldMapListData;
class UTextLayoutWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiMenuAreaMap : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextLayoutWidget* Txt_AreaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCParamMenuWorldMapListData* WorldMapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WorldMapTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DataTablePath;
    
public:
    URCUiMenuAreaMap();

    UFUNCTION(BlueprintCallable)
    void StartFastTravelProcWrap(ERCInputKeyType InKeyType);
    
    UFUNCTION(BlueprintCallable)
    void StartCloseProcWrap(ERCInputKeyType InKeyType);
    
    UFUNCTION(BlueprintCallable)
    void SetLocation(FName InMapID);
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void InitializeAreaMap();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

