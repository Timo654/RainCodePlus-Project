#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCRealEventMapInfo.h"
#include "RCRealEventAllMapInfo.generated.h"

UCLASS(Blueprintable)
class RC_API URCRealEventAllMapInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCRealEventMapInfo> MapInfo;
    
    URCRealEventAllMapInfo();

};

