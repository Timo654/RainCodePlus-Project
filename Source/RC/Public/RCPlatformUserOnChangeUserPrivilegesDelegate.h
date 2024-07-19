#pragma once
#include "CoreMinimal.h"
#include "ERCUserPrivileges.h"
#include "RCPlatformUserOnChangeUserPrivilegesDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRCPlatformUserOnChangeUserPrivileges, ERCUserPrivileges, UserPrivileges);

