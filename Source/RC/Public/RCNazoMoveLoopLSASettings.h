#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCNazoMoveLoopLSALevelSettings.h"
#include "RCNazoMoveLoopLSASettings.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoMoveLoopLSASettings : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoMoveLoopLSALevelSettings LevelSettings;
    
    RC_API FRCNazoMoveLoopLSASettings();
};

