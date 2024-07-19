#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "RCCharacterViewerCameraPawn.generated.h"

class AActor;
class USpringArmComponent;

UCLASS(Blueprintable)
class RC_API ARCCharacterViewerCameraPawn : public APawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* OurCameraSpringArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AimTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AimTargetSocketName;
    
public:
    ARCCharacterViewerCameraPawn(const FObjectInitializer& ObjectInitializer);

};

