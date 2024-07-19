#pragma once
#include "CoreMinimal.h"
#include "RCCharacterMotionUniqueContent.h"
#include "RCCharacterMotionUniqueContentScene.generated.h"

USTRUCT(BlueprintType)
struct FRCCharacterMotionUniqueContentScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCCharacterMotionUniqueContent> SceneUniqueContent;
    
    RC_API FRCCharacterMotionUniqueContentScene();
};

