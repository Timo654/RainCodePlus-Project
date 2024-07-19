#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCBoatBFL.generated.h"

class AActor;
class APawn;
class ARCCharacterScript;

UCLASS(Blueprintable)
class RC_API URCBoatBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCBoatBFL();

    UFUNCTION(BlueprintCallable)
    static bool TakePayload(APawn* Boat, FName Socket, AActor* Passenger);
    
    UFUNCTION(BlueprintCallable)
    static void Resume(APawn* Boat);
    
    UFUNCTION(BlueprintCallable)
    static APawn* Pause();
    
    UFUNCTION(BlueprintCallable)
    static bool GoAboard2(APawn* Boat, FName Socket, ARCCharacterScript* Passenger, bool Player, bool Reset);
    
    UFUNCTION(BlueprintCallable)
    static void GoAboard(APawn* Boat, APawn* Driver);
    
    UFUNCTION(BlueprintCallable)
    static TArray<ARCCharacterScript*> GetPassengers(APawn* Boat);
    
    UFUNCTION(BlueprintCallable)
    static ARCCharacterScript* GetPassenger(APawn* Boat, FName Socket);
    
    UFUNCTION(BlueprintCallable)
    static void Disemberk(bool OnlyFreeingControl);
    
};

