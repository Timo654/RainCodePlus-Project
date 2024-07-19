#pragma once
#include "CoreMinimal.h"
#include "RCCharacterRender.h"
#include "RCOptionChara.generated.h"

UCLASS(Blueprintable)
class RC_API ARCOptionChara : public ARCCharacterRender {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_near;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_far;
    
    ARCOptionChara(const FObjectInitializer& ObjectInitializer);

};

