#pragma once
#include "CoreMinimal.h"
#include "RCLevelBgActorSave.h"
#include "RCLevelCharacterActorSave.h"
#include "RCLevelCheckActorSave.h"
#include "RCLevelSave.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCLevelSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayBgmSoundID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCLevelCharacterActorSave> CharacterActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCLevelCheckActorSave> CheckActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCLevelBgActorSave> BgActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MovieIndex;
    
    FRCLevelSave();
};

