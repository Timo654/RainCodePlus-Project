#pragma once
#include "CoreMinimal.h"
#include "KoratEmitter.h"
#include "RCAttachParamInfo.h"
#include "RCEmitter.generated.h"

UCLASS(Blueprintable)
class RCEFFECT_API ARCEmitter : public AKoratEmitter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAttachParamInfo AttachParam;
    
    ARCEmitter(const FObjectInitializer& ObjectInitializer);

};

