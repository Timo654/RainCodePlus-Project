#pragma once
#include "CoreMinimal.h"
#include "FRCSeqTalkTalkSectionTalkDataType.h"
#include "RCSeqTalkTalkSectionTalkData.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FRCSeqTalkTalkSectionTalkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqTalkTalkSectionTalkDataType DataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalkID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceAutoPlay;
    
    RCSEQEVENT_API FRCSeqTalkTalkSectionTalkData();
};

