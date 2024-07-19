#pragma once
#include "CoreMinimal.h"
#include "ERCKeyboardType.h"
#include "RCInputKeyInfo.h"
#include "RCKeyConfigInfo.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCKeyConfigInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCInputKeyInfo> KeyInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCKeyboardType KeyboardType;
    
    FRCKeyConfigInfo();
};

