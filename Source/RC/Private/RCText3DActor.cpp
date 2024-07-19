#include "RCText3DActor.h"
#include "RCText3DComponent.h"

ARCText3DActor::ARCText3DActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<URCText3DComponent>(TEXT("Text3DComponent"));
    this->Text3DComponent = (URCText3DComponent*)RootComponent;
    this->bInitialize = false;
    this->bVisible = true;
    this->bVisibleActor = true;
    this->bPause = false;
}

void ARCText3DActor::SetWidth(float Width, bool bActorScale, bool bExceptJA) {
}

void ARCText3DActor::SetVisibility(bool bInVisible, bool bDirect) {
}

void ARCText3DActor::SetPause(bool bInPause, bool bDirect) {
}

bool ARCText3DActor::IsVisibility() {
    return false;
}

bool ARCText3DActor::IsPause() {
    return false;
}

void ARCText3DActor::GetTextSize(FVector& OutTextSize) {
}

FText ARCText3DActor::GetText() {
    return FText::GetEmpty();
}


