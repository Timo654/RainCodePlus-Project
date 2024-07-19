#pragma once
#include "CoreMinimal.h"
#include "RCSequenceSectionEndData_Base.generated.h"

class ULevelSequencePlayer;

USTRUCT(BlueprintType)
struct FRCSequenceSectionEndData_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* SequencePlayer;
    
    RC_API FRCSequenceSectionEndData_Base();
};

