#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ERCDebugAutoPlayType.h"
#include "RCAutoPlayCheckLogInfo.h"
#include "RCDebugAutoPlayManager.generated.h"

UCLASS(Blueprintable)
class RC_API URCDebugAutoPlayManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSceneLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoSceneChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCDebugAutoPlayType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCAutoPlayCheckLogInfo> CheckLogList;
    
public:
    URCDebugAutoPlayManager();

};

