#pragma once
#include "CoreMinimal.h"
#include "ERCShinigamiAITargetPointType.h"
#include "RCTargetPoint.h"
#include "RCShinigamiAITargetPoint.generated.h"

UCLASS(Blueprintable)
class RC_API ARCShinigamiAITargetPoint : public ARCTargetPoint {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCShinigamiAITargetPointType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShinigamiLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoveRank;
    
public:
    ARCShinigamiAITargetPoint(const FObjectInitializer& ObjectInitializer);

};

