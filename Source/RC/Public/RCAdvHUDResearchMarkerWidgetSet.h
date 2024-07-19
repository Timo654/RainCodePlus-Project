#pragma once
#include "CoreMinimal.h"
#include "RCAdvHUDResearchMarkerWidgetSet.generated.h"

class ARCWidgetActor;
class URCReUiChousaTarget;
class URCReUiChousaTargetName;

USTRUCT(BlueprintType)
struct FRCAdvHUDResearchMarkerWidgetSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCReUiChousaTargetName* MarkerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCReUiChousaTargetName* MarkerName2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCReUiChousaTarget* Marker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCWidgetActor* MarkerActor;
    
    RC_API FRCAdvHUDResearchMarkerWidgetSet();
};

