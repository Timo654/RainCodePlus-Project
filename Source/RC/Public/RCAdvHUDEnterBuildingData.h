#pragma once
#include "CoreMinimal.h"
#include "RCAdvHUDAccessableCheckActorData.h"
#include "RCAdvHUDEnterBuildingWidgetSet.h"
#include "RCAdvHUDInteractIconData.h"
#include "RCAdvHUDEnterBuildingData.generated.h"

USTRUCT(BlueprintType)
struct FRCAdvHUDEnterBuildingData : public FRCAdvHUDInteractIconData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAdvHUDAccessableCheckActorData CheckActorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAdvHUDEnterBuildingWidgetSet WidgetSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLooksLikeUsable;
    
    RC_API FRCAdvHUDEnterBuildingData();
};

