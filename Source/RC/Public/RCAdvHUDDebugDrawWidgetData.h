#pragma once
#include "CoreMinimal.h"
#include "RCAdvHUDDebugDrawWidgetData.generated.h"

class URCUiWidgetBase;

USTRUCT(BlueprintType)
struct FRCAdvHUDDebugDrawWidgetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiWidgetBase* Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotPlayerScreen;
    
    RC_API FRCAdvHUDDebugDrawWidgetData();
};

