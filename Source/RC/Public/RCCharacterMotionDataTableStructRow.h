#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCCharacterMotionDataTableStructRow.generated.h"

USTRUCT(BlueprintType)
struct FRCCharacterMotionDataTableStructRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SplitType;
    
    RC_API FRCCharacterMotionDataTableStructRow();
};

