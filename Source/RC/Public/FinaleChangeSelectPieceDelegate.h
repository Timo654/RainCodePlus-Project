#pragma once
#include "CoreMinimal.h"
#include "FinaleChangeSelectPieceDelegate.generated.h"

class UTexture2D;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FFinaleChangeSelectPiece, const FString&, PieceTitle, UTexture2D*, PieceImg, int32, lockNum, bool, isUsed, bool, isUnlockAnim);

