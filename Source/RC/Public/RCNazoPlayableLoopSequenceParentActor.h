#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "RCNazoPlayableLoopSequenceParentActor.generated.h"

class ALevelSequenceActor;
class USceneComponent;

UCLASS(Blueprintable)
class RC_API ARCNazoPlayableLoopSequenceParentActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* SequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OffsetLocation;
    
public:
    ARCNazoPlayableLoopSequenceParentActor(const FObjectInitializer& ObjectInitializer);

};

