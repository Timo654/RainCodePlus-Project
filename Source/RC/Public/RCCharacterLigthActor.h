#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCActor.h"
#include "RCCharacterLigthActor.generated.h"

UCLASS(Blueprintable)
class RC_API ARCCharacterLigthActor : public ARCActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator SeqRotatorOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator CurrentCameraRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RotationOffsetInitValue;
    
public:
    ARCCharacterLigthActor(const FObjectInitializer& ObjectInitializer);

};

