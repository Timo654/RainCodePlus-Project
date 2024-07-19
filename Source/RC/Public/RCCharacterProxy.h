#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCCharacterProxy.generated.h"

class ARCAnimalRender;
class ARCCharacterRender;
class ARCKakiwariRender;
class ARCPawnRender;
class UEnum;
class URCCharacterAnimCtrl;
class URCCharacterAttachmentCtrl;
class URCCharacterFacialCtrl;
class URCCharacterFormCtrl;
class URCCharacterHoldingHandCtrl;
class URCCharacterLookCtrl;
class URCCharacterMotionListDataAsset;
class URCCharacterToonOutlineCtrl;
class URCScriptActorStatus;

UCLASS(Blueprintable)
class RC_API URCCharacterProxy : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCCharacterRender* CharacterRender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCPawnRender* PawnRender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCKakiwariRender* KakiwariRender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCAnimalRender* AnimalRender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCCharacterAttachmentCtrl* AttachmentCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCCharacterAnimCtrl* MotionCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCCharacterFormCtrl* FormCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCCharacterFacialCtrl* FacialCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCCharacterLookCtrl* LookCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCCharacterToonOutlineCtrl* OutlineCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCCharacterHoldingHandCtrl* HoldingHandCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnum* MotionClassificationEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCCharacterMotionListDataAsset* MotionListDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCScriptActorStatus* CharacterStatus;
    
public:
    URCCharacterProxy();

};

