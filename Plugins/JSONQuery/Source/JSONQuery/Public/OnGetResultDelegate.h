#pragma once
#include "CoreMinimal.h"
#include "EJSONResult.h"
#include "OnGetResultDelegate.generated.h"

class UJsonFieldData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnGetResult, const bool, bSuccess, UJsonFieldData*, Json, const EJSONResult, Status);

