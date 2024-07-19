#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCMojimichiBPDFunctionLibrary.generated.h"

class ACameraActor;

UCLASS(Blueprintable)
class RC_API URCMojimichiBPDFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCMojimichiBPDFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static bool WasTextCaptured();
    
    UFUNCTION(BlueprintCallable)
    static bool StopFracture();
    
    UFUNCTION(BlueprintCallable)
    static void StartSystem(ACameraActor* CameraActor);
    
    UFUNCTION(BlueprintCallable)
    static bool StartFracture();
    
    UFUNCTION(BlueprintCallable)
    static bool StartConstructionWithActorTag(FName Meshtag, FName ActorTag);
    
    UFUNCTION(BlueprintCallable)
    static bool StartConstruction(FName Meshtag);
    
    UFUNCTION(BlueprintCallable)
    static bool ShowText();
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnd();
    
    UFUNCTION(BlueprintCallable)
    static void End();
    
    UFUNCTION(BlueprintCallable)
    static bool DisolveText(float DisolveTime);
    
    UFUNCTION(BlueprintCallable)
    static bool CanClose();
    
};

