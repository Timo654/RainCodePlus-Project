#pragma once
#include "CoreMinimal.h"
#include "RCAdvHUDAccessableCharacterData.h"
#include "RCAdvHUDInteractIconData.h"
#include "RCAdvHUDTalkIconData.generated.h"

class URCUiIntTalk;

USTRUCT(BlueprintType)
struct FRCAdvHUDTalkIconData : public FRCAdvHUDInteractIconData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAdvHUDAccessableCharacterData CharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiIntTalk* TalkIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubquest;
    
    RC_API FRCAdvHUDTalkIconData();
};

