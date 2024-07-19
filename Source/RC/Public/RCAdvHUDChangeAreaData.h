#pragma once
#include "CoreMinimal.h"
#include "RCAdvHUDAccessableCheckActorData.h"
#include "RCAdvHUDChangeAreaWidgetSet.h"
#include "RCAdvHUDInteractIconData.h"
#include "RCAdvHUDChangeAreaData.generated.h"

USTRUCT(BlueprintType)
struct FRCAdvHUDChangeAreaData : public FRCAdvHUDInteractIconData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAdvHUDAccessableCheckActorData CheckActorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAdvHUDChangeAreaWidgetSet WidgetSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLooksLikeUsable;
    
    RC_API FRCAdvHUDChangeAreaData();
};

