#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCActor.h"
#include "RCKakiwariScript.generated.h"

class URCScriptActorComponent;

UCLASS(Blueprintable)
class RC_API ARCKakiwariScript : public ARCActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCScriptActorComponent* ScriptActorComp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Velocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DrawLayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugScriptDraw;
    
public:
    ARCKakiwariScript(const FObjectInitializer& ObjectInitializer);

};

