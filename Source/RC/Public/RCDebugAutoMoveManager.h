#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCDebugAutoMoveManager.generated.h"

class URCDebugAutoMoveMap;

UCLASS(Blueprintable)
class RC_API URCDebugAutoMoveManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URCDebugAutoMoveMap*> AutoMoveMapList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCDebugAutoMoveMap* NowMapInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveEnable;
    
public:
    URCDebugAutoMoveManager();

};

