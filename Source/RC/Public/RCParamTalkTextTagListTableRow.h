#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamTalkTextTagListTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamTalkTextTagListTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpeakerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TagName;
    
    RC_API FRCParamTalkTextTagListTableRow();
};

