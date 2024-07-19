#pragma once
#include "CoreMinimal.h"
#include "FRCSeqSubtitleSubtitleSectionSubtitleDataType.h"
#include "RCSeqSubtitleSubtitleSectionSubtitleData.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FRCSeqSubtitleSubtitleSectionSubtitleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSeqSubtitleSubtitleSectionSubtitleDataType DataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SubTitleID;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayAtEnd;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayToNext;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCloseAtAllEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopSequencer;
    
    RCSEQEVENT_API FRCSeqSubtitleSubtitleSectionSubtitleData();
};

