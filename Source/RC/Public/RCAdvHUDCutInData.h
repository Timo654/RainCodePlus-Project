#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERCAdvHUDCutInSEType.h"
#include "ERCAdvHUDCutInType.h"
#include "RCAdvHUDCutInData.generated.h"

USTRUCT(BlueprintType)
struct FRCAdvHUDCutInData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CutInID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDCutInType CutInType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDCutInSEType CutInSEType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DlcType;
    
    RC_API FRCAdvHUDCutInData();
};

