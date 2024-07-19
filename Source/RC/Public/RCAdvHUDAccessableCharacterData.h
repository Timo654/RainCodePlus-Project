#pragma once
#include "CoreMinimal.h"
#include "RCAdvHUDAccessableCharacterData.generated.h"

class APawn;
class ARCCharacterRender;
class ARCPawnRender;

USTRUCT(BlueprintType)
struct FRCAdvHUDAccessableCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCPawnRender* NPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCCharacterRender* Character;
    
    RC_API FRCAdvHUDAccessableCharacterData();
};

