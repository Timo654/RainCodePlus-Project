#pragma once
#include "CoreMinimal.h"
#include "EFormPartType.generated.h"

UENUM()
enum class EFormPartType : int32 {
    Face,
    Body,
    Coat,
    Hair,
    HandR,
    HandL,
};

