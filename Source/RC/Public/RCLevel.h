#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCLevel.generated.h"

UCLASS(Blueprintable)
class RC_API URCLevel : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCLevel();

    UFUNCTION(BlueprintCallable)
    static void SetAllMeshVisible(bool bVisible, bool bIsActor);
    
    UFUNCTION(BlueprintCallable)
    static bool ChangeTitle();
    
    UFUNCTION(BlueprintCallable)
    static bool ChangeGameLevel(int32 InChapter, FName InScene);
    
};

