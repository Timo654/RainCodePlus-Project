#pragma once
#include "CoreMinimal.h"
#include "RCNazoBattleShinigamiSettings.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoBattleShinigamiSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    RC_API FRCNazoBattleShinigamiSettings();
};

