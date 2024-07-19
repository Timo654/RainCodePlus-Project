#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCAttachmentBFL.generated.h"

class AActor;

UCLASS(Blueprintable)
class RC_API URCAttachmentBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCAttachmentBFL();

    UFUNCTION(BlueprintCallable)
    static AActor* GetAttachmentActor(const FName InName);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeLightColor(AActor* InActor, const FLinearColor InAmbientColor, const FLinearColor InDirectionalColor);
    
};

