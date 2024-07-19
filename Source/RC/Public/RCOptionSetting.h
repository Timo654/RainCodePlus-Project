#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Option.h"
#include "RCOptionSetting.generated.h"

UCLASS(Blueprintable)
class RC_API URCOptionSetting : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOption Option;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsApplyGraphicsOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsApplyScreenSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsApplyWindowPosition;
    
public:
    URCOptionSetting();

};

