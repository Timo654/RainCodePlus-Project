#pragma once
#include "CoreMinimal.h"
#include "ERCGameMenuKaikagiStatus.h"
#include "ERCGameMenuSelectType.h"
#include "ERCGameMenuStatus.h"
#include "RCVariableGameMenuTopSelectInfo.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCVariableGameMenuTopSelectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCGameMenuSelectType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNew;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCGameMenuKaikagiStatus KaikagiStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCGameMenuStatus Status;
    
    FRCVariableGameMenuTopSelectInfo();
};

