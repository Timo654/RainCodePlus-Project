#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamSoundResidentListTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamSoundResidentListTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoundType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DataPath;
    
    RC_API FRCParamSoundResidentListTableRow();
};

