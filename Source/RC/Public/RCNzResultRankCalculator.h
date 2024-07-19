#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCNzResultRankCalculator.generated.h"

UCLASS(Blueprintable)
class RC_API URCNzResultRankCalculator : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChapterNumber;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 HitPointRank;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 ResultRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TanteiPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ContinueCount;
    
public:
    URCNzResultRankCalculator();

};

