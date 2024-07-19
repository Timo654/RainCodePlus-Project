#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WinstonBPLibrary.generated.h"

UCLASS(Blueprintable)
class UWinstonBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWinstonBPLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WinstonSetRotation(FVector Vec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector WinstonGetRotation();
    
};

