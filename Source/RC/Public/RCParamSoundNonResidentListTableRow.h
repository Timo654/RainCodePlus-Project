#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamSoundNonResidentListTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamSoundNonResidentListTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SheetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoundType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DataPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SheetName;
    
    RC_API FRCParamSoundNonResidentListTableRow();
};

