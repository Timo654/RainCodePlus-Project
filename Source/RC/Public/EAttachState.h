#pragma once
#include "CoreMinimal.h"
#include "EAttachState.generated.h"

UENUM()
enum class EAttachState : int8 {
    Non,
    AttachmentLoading,
    AttachmentActive,
    AttachmentError,
};

