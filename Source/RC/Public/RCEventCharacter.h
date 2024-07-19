#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCCharacterRender.h"
#include "RCEventCharacterFormStyleData.h"
#include "RCEventCharacter.generated.h"

class URCCharacterAnimCtrl;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class RC_API ARCEventCharacter : public ARCCharacterRender {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FName FormStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCEventCharacterFormStyleData> FormStyleDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* EyeSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoHairSpecular;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator HeadInitRotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator HeadCurrentRotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator HeadDiffRotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HairSpecularX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HairSpecularY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HairSpecularZ;
    
public:
    ARCEventCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetEyeSkeletalMesh() const;
    
    UFUNCTION(BlueprintCallable)
    URCCharacterAnimCtrl* GetAnimCtrl();
    
};

