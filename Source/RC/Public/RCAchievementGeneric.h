#pragma once
#include "CoreMinimal.h"
#include "RCAchievementInterface.h"
#include "RCAchievementGeneric.generated.h"

class URCAchievementProcessGeneric;

UCLASS(Blueprintable)
class RC_API URCAchievementGeneric : public URCAchievementInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URCAchievementProcessGeneric*> ProcessList;
    
public:
    URCAchievementGeneric();

};

