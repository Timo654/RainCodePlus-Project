#pragma once
#include "CoreMinimal.h"
#include "RCVariableGameMenuStoryInfo.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCVariableGameMenuStoryInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNew;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRead;
    
    FRCVariableGameMenuStoryInfo();
};

