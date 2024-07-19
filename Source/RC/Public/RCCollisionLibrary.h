#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "RCCollisionLibrary.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class RC_API URCCollisionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCCollisionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SphereOverlapBlockingSingleByProfile(const UObject* WorldContextObject, const FVector Position, float Radius, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
};

