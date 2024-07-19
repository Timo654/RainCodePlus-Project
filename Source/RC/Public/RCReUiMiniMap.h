#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCReUiMiniMap.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCReUiMiniMap : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TexturePath;
    
public:
    URCReUiMiniMap();

    UFUNCTION(BlueprintCallable)
    void WaitingOpen();
    
    UFUNCTION(BlueprintCallable)
    void Wait();
    
    UFUNCTION(BlueprintCallable)
    void SetMapScale(float InScale);
    
    UFUNCTION(BlueprintCallable)
    void SetMapMode(bool bInIsFixNorth);
    
    UFUNCTION(BlueprintCallable)
    bool SetLocation(FName InMapID, FName InAreaNameID);
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void InitializeMiniMap();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CreateIcon();
    
public:
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

