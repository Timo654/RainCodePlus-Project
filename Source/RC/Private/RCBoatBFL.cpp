#include "RCBoatBFL.h"

URCBoatBFL::URCBoatBFL() {
}

bool URCBoatBFL::TakePayload(APawn* Boat, FName Socket, AActor* Passenger) {
    return false;
}

void URCBoatBFL::Resume(APawn* Boat) {
}

APawn* URCBoatBFL::Pause() {
    return NULL;
}

bool URCBoatBFL::GoAboard2(APawn* Boat, FName Socket, ARCCharacterScript* Passenger, bool Player, bool Reset) {
    return false;
}

void URCBoatBFL::GoAboard(APawn* Boat, APawn* Driver) {
}

TArray<ARCCharacterScript*> URCBoatBFL::GetPassengers(APawn* Boat) {
    return TArray<ARCCharacterScript*>();
}

ARCCharacterScript* URCBoatBFL::GetPassenger(APawn* Boat, FName Socket) {
    return NULL;
}

void URCBoatBFL::Disemberk(bool OnlyFreeingControl) {
}


