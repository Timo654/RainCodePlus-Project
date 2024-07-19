#pragma once
#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "RCShinigamiTargetPoint.generated.h"

class ARCOptionCharaShinigami;

UCLASS(Blueprintable)
class RC_API ARCShinigamiTargetPoint : public ATargetPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float lengs;
    
    ARCShinigamiTargetPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetShinigami(ARCOptionCharaShinigami* Shinigami);
    
};

