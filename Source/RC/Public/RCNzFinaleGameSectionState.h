#pragma once
#include "CoreMinimal.h"
#include "RCNzFinaleGamePieceData.h"
#include "RCNzFinaleGameSectionState.generated.h"

USTRUCT(BlueprintType)
struct FRCNzFinaleGameSectionState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCNzFinaleGamePieceData> pieceList;
    
    RC_API FRCNzFinaleGameSectionState();
};

