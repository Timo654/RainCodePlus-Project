#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCCompanionBFL.generated.h"

class AActor;
class ARCCharacterRender;

UCLASS(Blueprintable)
class RC_API URCCompanionBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCCompanionBFL();

    UFUNCTION(BlueprintCallable)
    static void SetPlayerWarp();
    
    UFUNCTION(BlueprintCallable)
    static void SetCharacterVisible(bool bInVisible);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveCharacter(AActor* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    static ARCCharacterRender* GetCharacterActor(int32 InCompanionIndex);
    
    UFUNCTION(BlueprintCallable)
    static void AddCharacter(AActor* InCharacter);
    
};

