#pragma once
#include "CoreMinimal.h"
#include "EFinaleSEType.generated.h"

UENUM(BlueprintType)
enum class EFinaleSEType : uint8 {
    MT_Damage,
    MT_IndexSelect,
    MT_IndexDecision,
    MT_QSelect,
    MT_QSuccess,
    MT_QFailed,
    MT_NazoSuccess,
    MT_PieceSelect,
    MT_PieceDecision,
    MT_PieceGet,
    MT_Contents,
    MT_MovePage,
    MT_ElucidationUi,
    MT_CompletionUi,
    MT_TimeLimit,
    MT_TimeSignal,
    MT_NazoTimeOut,
    MT_EncountQ,
    MT_SlashQ,
    MT_DisappearsQ,
    MT_CounterAttackQ,
    MT_BaloonDisplay,
    MT_PeaceOpen,
    MT_SelectUnreleased,
    MT_PieceSet,
    MT_PieceDisable,
    MT_ExplainBalloon,
    MT_SuifiStartCandle,
    MT_SuifiEndCandle,
    MT_SuifiUICandleOff,
    MT_SuifiUICandleOn,
    MT_SuifiPieceList,
    MT_SuifinContentCursor,
    MT_SuifinContentDecision,
    MT_SuifinTitle_000,
};

