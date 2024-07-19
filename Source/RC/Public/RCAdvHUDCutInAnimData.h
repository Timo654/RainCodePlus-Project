#pragma once
#include "CoreMinimal.h"
#include "ERCAdvHUDWBPLoadState.h"
#include "RCAdvHUDCutInAnimData.generated.h"

USTRUCT(BlueprintType)
struct FRCAdvHUDCutInAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CutInID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWBPLoadState WBPLoadState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WBPFileName;
    
    RC_API FRCAdvHUDCutInAnimData();
};

