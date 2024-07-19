#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RCDataConversionBP.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RC_API URCDataConversionBP : public UActorComponent {
    GENERATED_BODY()
public:
    URCDataConversionBP(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FName TestPrint();
    
    UFUNCTION(BlueprintCallable)
    FString GetUTF8(const FString& in_ansi_string);
    
};

