#pragma once
#include "CoreMinimal.h"
#include "ERCUserPrivileges.h"
#include "RCPlatformUserRequestUserPrivilegeCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FRCPlatformUserRequestUserPrivilegeCallback, ERCUserPrivileges, UserPrivileges);

