#pragma once
#include "CoreMinimal.h"
#include "RCSequenceSectionEndData_Base.h"
#include "RCSequenceSectionEndData_Subtitle.generated.h"

USTRUCT(BlueprintType)
struct FRCSequenceSectionEndData_Subtitle : public FRCSequenceSectionEndData_Base {
    GENERATED_BODY()
public:
    RC_API FRCSequenceSectionEndData_Subtitle();
};

