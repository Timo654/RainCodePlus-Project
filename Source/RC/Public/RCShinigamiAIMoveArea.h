#pragma once
#include "CoreMinimal.h"
#include "ERCShinigamiAiMoveAreaType.h"
#include "RCActor.h"
#include "RCShinigamiAIMoveArea.generated.h"

class UShapeComponent;

UCLASS(Blueprintable)
class RC_API ARCShinigamiAIMoveArea : public ARCActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCShinigamiAiMoveAreaType AreaType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* CollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDraw;
    
public:
    ARCShinigamiAIMoveArea(const FObjectInitializer& ObjectInitializer);

};

