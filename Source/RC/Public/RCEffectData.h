#pragma once
#include "CoreMinimal.h"
#include "ERCEffectDataState.h"
#include "ERCEffectType.h"
#include "RCEffectDataTableRowData.h"
#include "RCEffectData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FRCEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCEffectDataState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCEffectDataTableRowData RowData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCEffectType EffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    RC_API FRCEffectData();
};

