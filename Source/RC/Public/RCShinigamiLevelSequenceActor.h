#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERCSequenceShinigamiFollowTarget.h"
#include "ERCSequenceShinigamiFollowType.h"
#include "ERCSequenceShinigamiTransformTypeLSA.h"
#include "RCLevelSequenceActor.h"
#include "RCShinigamiLevelSequenceActor.generated.h"

class AActor;

UCLASS(Blueprintable)
class RC_API ARCShinigamiLevelSequenceActor : public ARCLevelSequenceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCSequenceShinigamiTransformTypeLSA TransformType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCSequenceShinigamiFollowType FollowType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCSequenceShinigamiFollowTarget FollowTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* FollowTargetActor;
    
public:
    ARCShinigamiLevelSequenceActor(const FObjectInitializer& ObjectInitializer);

};

