#pragma once
#include "CoreMinimal.h"
#include "RCReHUDSelectData.generated.h"

USTRUCT(BlueprintType)
struct FRCReHUDSelectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckMark;
    
    RC_API FRCReHUDSelectData();
};

