#pragma once
#include "CoreMinimal.h"
#include "RCAdvHUDAccessableCheckActorData.h"
#include "RCAdvHUDInteractIconData.h"
#include "RCAdvHUDMarkerWidgetSet.h"
#include "RCAdvHUDMarkerData.generated.h"

USTRUCT(BlueprintType)
struct FRCAdvHUDMarkerData : public FRCAdvHUDInteractIconData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAdvHUDAccessableCheckActorData CheckActorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAdvHUDMarkerWidgetSet WidgetSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubquest;
    
    RC_API FRCAdvHUDMarkerData();
};

