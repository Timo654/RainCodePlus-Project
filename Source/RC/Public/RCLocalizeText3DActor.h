#pragma once
#include "CoreMinimal.h"
#include "RCText3DActor.h"
#include "RCLocalizeText3DActor.generated.h"

UCLASS(Blueprintable)
class RC_API ARCLocalizeText3DActor : public ARCText3DActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTextIdChanged;
    
public:
    ARCLocalizeText3DActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTextID(FName InTextID);
    
    UFUNCTION(BlueprintCallable)
    FName GetTextID();
    
};

