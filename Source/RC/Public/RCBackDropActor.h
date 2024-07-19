#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "RCBackDropActor.generated.h"

UCLASS(Blueprintable)
class RC_API ARCBackDropActor : public AActor {
    GENERATED_BODY()
public:
    ARCBackDropActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    float RGBA2Hight(FVector4 col);
    
    UFUNCTION(BlueprintCallable)
    void Reflesh();
    
    UFUNCTION(BlueprintCallable)
    bool NeedScap();
    
    UFUNCTION(BlueprintCallable)
    void MakeScanMap(FVector Pos, int32 startX, int32 startY, int32 endX, int32 endY, int32 BrockSizeX, int32 BrockSizeY);
    
    UFUNCTION(BlueprintCallable)
    void Bake(int32 brockSize);
    
    UFUNCTION(BlueprintCallable)
    void AddPoint(FVector Pos, float W, float H, int32 Xbrock, int32 Ybrock);
    
};

