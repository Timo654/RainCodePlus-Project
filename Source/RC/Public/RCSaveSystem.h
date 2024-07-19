#pragma once
#include "CoreMinimal.h"
#include "Option.h"
#include "RCKeyConfigInfo.h"
#include "RCSaveGame.h"
#include "RCVariableSystemSave.h"
#include "RCSaveSystem.generated.h"

UCLASS(Blueprintable)
class RC_API URCSaveSystem : public URCSaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastAutoSaveNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOption Option;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableSystemSave VariableSystemSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCKeyConfigInfo KeyConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMargeDemoSavedata;
    
public:
    URCSaveSystem();

};

