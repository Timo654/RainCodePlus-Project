#pragma once
#include "CoreMinimal.h"
#include "RCDevelopmentSave.h"
#include "RCSaveGame.h"
#include "RCSaveDevelopment.generated.h"

UCLASS(Blueprintable)
class RC_API URCSaveDevelopment : public URCSaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCDevelopmentSave DevelopmentSave;
    
public:
    URCSaveDevelopment();

};

