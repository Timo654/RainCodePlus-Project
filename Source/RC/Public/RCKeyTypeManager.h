#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ERCInputKeyConfigType.h"
#include "RCKeyConfigInfo.h"
#include "RCKeyTypeManager.generated.h"

UCLASS(Blueprintable)
class RC_API URCKeyTypeManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERCInputKeyConfigType> InputKeyTypeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCKeyConfigInfo KeyConfigInfo;
    
public:
    URCKeyTypeManager();

};

