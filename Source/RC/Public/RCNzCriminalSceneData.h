#pragma once
#include "CoreMinimal.h"
#include "RCNzCriminalSceneData.generated.h"

USTRUCT(BlueprintType)
struct FRCNzCriminalSceneData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartQuestionFontSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MainQuestionFontSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RecoveryPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamagePoint;
    
    RC_API FRCNzCriminalSceneData();
};

