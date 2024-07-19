#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCNzFinalePieceObjectInfo.h"
#include "RCNzFinalePieceObjectBase.generated.h"

UCLASS(Blueprintable)
class RC_API URCNzFinalePieceObjectBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNzFinalePieceObjectInfo pieceInfo;
    
    URCNzFinalePieceObjectBase();

};

