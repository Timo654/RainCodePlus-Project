#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiFinaleHeadingTextWidget.generated.h"

class ARCNzFinaleManagerBase;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiFinaleHeadingTextWidget : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SectionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCNzFinaleManagerBase* FinaleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DetectiveUIPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DetectiveBackgroudImgScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> DebugDrawLinesPointList;
    
public:
    URCNzUiFinaleHeadingTextWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSelectStatus(bool IsSelect);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePieceState(const TArray<bool>& isStateList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIndexText(const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIndexTex(const UTexture2D* tex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHeadingText(const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDetectiveRestStatus(const TArray<bool>& statusList);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDebugDrawLine(const TArray<FVector2D>& Points);
    
    UFUNCTION(BlueprintCallable)
    void InitializeHeadingTextWidget(FName NewSectionID, FName NewTextID, ARCNzFinaleManagerBase* NewFinaleManager, int32 idx, const FString& uiPath);
    
    UFUNCTION(BlueprintCallable)
    FName GetSectionTextID();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSectionIdx();
    
    UFUNCTION(BlueprintCallable)
    FName GetSectionID();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetIndexText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetHeadingText();
    
    UFUNCTION(BlueprintCallable)
    FString GetDetectiveUIPath();
    
};

