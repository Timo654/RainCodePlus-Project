#pragma once
#include "CoreMinimal.h"
#include "RCSequenceSectionEndData_Base.h"
#include "RCSequenceSectionEndData_Character.generated.h"

USTRUCT(BlueprintType)
struct FRCSequenceSectionEndData_Character : public FRCSequenceSectionEndData_Base {
    GENERATED_BODY()
public:
    RC_API FRCSequenceSectionEndData_Character();
};

