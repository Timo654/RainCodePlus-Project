#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCCharacterViewerMenu.generated.h"

class UObject;

UCLASS(Blueprintable)
class RC_API URCCharacterViewerMenu : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCCharacterViewerMenu();

    UFUNCTION(BlueprintCallable)
    static void ToggleDebugMenu(const UObject* InContext);
    
protected:
    UFUNCTION(BlueprintCallable)
    static void OpenDebugMenu(const UObject* InContext);
    
public:
    UFUNCTION(BlueprintCallable)
    static void DeleteDebugMenu();
    
    UFUNCTION(BlueprintCallable)
    static void CreateDebugMenu();
    
protected:
    UFUNCTION(BlueprintCallable)
    static void CloseDebugMenu();
    
};

