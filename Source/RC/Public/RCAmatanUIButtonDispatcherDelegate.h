#pragma once
#include "CoreMinimal.h"
#include "ERCAmatanUIButton.h"
#include "RCAmatanUIButtonDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRCAmatanUIButtonDispatcher, ERCAmatanUIButton, code);

