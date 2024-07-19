#pragma once
#include "CoreMinimal.h"
#include "RCCharacterFormStyleData.h"
#include "RCCharacterRender.h"
#include "RCCharacterSoldier.generated.h"

UCLASS(Blueprintable)
class RC_API ARCCharacterSoldier : public ARCCharacterRender {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FName FormStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCCharacterFormStyleData> FormStyleDataMap;
    
public:
    ARCCharacterSoldier(const FObjectInitializer& ObjectInitializer);

};

