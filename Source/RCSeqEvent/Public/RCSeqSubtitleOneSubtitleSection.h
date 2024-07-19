#pragma once
#include "CoreMinimal.h"
#include "RCSeqBaseSection.h"
#include "RCSeqSubtitleOneSubtitleSectionJumpData.h"
#include "RCSeqSubtitleOneSubtitleSectionSubtitleData2.h"
#include "RCSeqSubtitleOneSubtitleSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class URCSeqSubtitleOneSubtitleSection : public URCSeqBaseSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqSubtitleOneSubtitleSectionSubtitleData2 SubtitleData2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqSubtitleOneSubtitleSectionJumpData JumpData;
    
    URCSeqSubtitleOneSubtitleSection();

};

