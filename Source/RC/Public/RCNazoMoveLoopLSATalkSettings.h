#pragma once
#include "CoreMinimal.h"
#include "ERCNazoMoveLoopTalkType.h"
#include "RCNazoMoveLoopLSATalkSettings.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FRCNazoMoveLoopLSATalkSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCNazoMoveLoopTalkType TalkType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBeforeTalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalkID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayAfterTalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFinishMoveLoop;
    
    RC_API FRCNazoMoveLoopLSATalkSettings();
};

