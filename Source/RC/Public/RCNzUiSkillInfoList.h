#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiSkillInfoList.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiSkillInfoList : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartOffsetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllFinishFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FinishWaitTime;
    
public:
    URCNzUiSkillInfoList();

    UFUNCTION(BlueprintCallable)
    bool StartShowSkillInfoList(const TArray<FName>& IdList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinished() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishSkilInfoList();
    
};

