#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCSelectText3DActorBFL.generated.h"

class ARCSelectText3DActor;

UCLASS(Blueprintable)
class RC_API URCSelectText3DActorBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCSelectText3DActorBFL();

    UFUNCTION(BlueprintCallable)
    static void SetTextColor(FName InActorName, FLinearColor InTextColor);
    
    UFUNCTION(BlueprintCallable)
    static ARCSelectText3DActor* GetSelectText3DActor(FName InActorName);
    
};

