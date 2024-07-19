#pragma once
#include "CoreMinimal.h"
#include "RCActor.h"
#include "RCAttachmentActor.generated.h"

UCLASS(Blueprintable)
class RC_API ARCAttachmentActor : public ARCActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ColorPaletteId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnLoad;
    
public:
    ARCAttachmentActor(const FObjectInitializer& ObjectInitializer);

};

