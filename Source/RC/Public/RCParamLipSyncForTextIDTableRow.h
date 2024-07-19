#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamLipSyncForTextIDTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamLipSyncForTextIDTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VoiceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PartVoiceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharacterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName exception;
    
    RC_API FRCParamLipSyncForTextIDTableRow();
};

