#pragma once
#include "CoreMinimal.h"
#include "RCSequenceSectionEndData_Base.h"
#include "RCSequenceSectionEndData_CharacterFacialColor.generated.h"

USTRUCT(BlueprintType)
struct FRCSequenceSectionEndData_CharacterFacialColor : public FRCSequenceSectionEndData_Base {
    GENERATED_BODY()
public:
    RC_API FRCSequenceSectionEndData_CharacterFacialColor();
};

