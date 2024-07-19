#pragma once
#include "CoreMinimal.h"
#include "EFormState.generated.h"

UENUM()
enum class EFormState : int8 {
    Non,
    FormLoading,
    FormActive,
    FormError,
};

