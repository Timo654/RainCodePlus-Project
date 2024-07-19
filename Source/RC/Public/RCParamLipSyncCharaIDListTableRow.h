#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamLipSyncCharaIDListTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamLipSyncCharaIDListTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLipSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CharaIDList;
    
    RC_API FRCParamLipSyncCharaIDListTableRow();
};

