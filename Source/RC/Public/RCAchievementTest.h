#pragma once
#include "CoreMinimal.h"
#include "ERCAchievementCommand.h"
#include "RCAchievementInterface.h"
#include "RCAchievementTest.generated.h"

UCLASS(Blueprintable)
class RC_API URCAchievementTest : public URCAchievementInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAchievementCommand Command;
    
public:
    URCAchievementTest();

};

