#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCVariableNazoResultList.h"
#include "RCVariableNazoResult.generated.h"

UCLASS(Blueprintable)
class RC_API URCVariableNazoResult : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCVariableNazoResultList> ResultAllInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableNazoResultList ResultCurrentInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NowMinigameID;
    
public:
    URCVariableNazoResult();

};

