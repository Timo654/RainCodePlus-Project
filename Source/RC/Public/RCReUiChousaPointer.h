#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCUiWidgetBase.h"
#include "RCReUiChousaPointer.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCReUiChousaPointer : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Def_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Def;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Def_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_On_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_On;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_On_Out;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Push;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_On_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Question_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Question;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Question_Out;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Question_Push;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Question_Finish;
    
public:
    URCReUiChousaPointer();

    UFUNCTION(BlueprintCallable)
    void StartDefault();
    
    UFUNCTION(BlueprintCallable)
    void SetTracingPosition(FVector2D In2DPosition, float InRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetPosition(FVector2D In2DPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetQuestionFlag(bool bInQuestion);
    
    UFUNCTION(BlueprintCallable)
    void OnMark();
    
    UFUNCTION(BlueprintCallable)
    void OffMark();
    
    UFUNCTION(BlueprintCallable)
    void InitializeChousaPointer();
    
    UFUNCTION(BlueprintCallable)
    float GetWidgetRadius();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetMousePos();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetCursorDirection();
    
    UFUNCTION(BlueprintCallable)
    void FinishOverlap();
    
    UFUNCTION(BlueprintCallable)
    void FinishDefault();
    
    UFUNCTION(BlueprintCallable)
    void FinishCursor();
    
    UFUNCTION(BlueprintCallable)
    void Decided();
    
};

