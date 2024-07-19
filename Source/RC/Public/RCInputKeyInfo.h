#pragma once
#include "CoreMinimal.h"
#include "ERCInputKeyConfigType.h"
#include "RCKeyType.h"
#include "RCInputKeyInfo.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCInputKeyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCInputKeyConfigType KeyConfigType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCKeyType> KeyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnyKey;
    
    FRCInputKeyInfo();
};

