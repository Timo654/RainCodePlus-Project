#pragma once
#include "CoreMinimal.h"
#include "RCSequenceSectionEndData_Base.h"
#include "RCSequenceSectionEndData_Talk.generated.h"

USTRUCT(BlueprintType)
struct FRCSequenceSectionEndData_Talk : public FRCSequenceSectionEndData_Base {
    GENERATED_BODY()
public:
    RC_API FRCSequenceSectionEndData_Talk();
};

