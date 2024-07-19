#include "RCActionButton.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

ARCActionButton::ARCActionButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoReceiveInput = EAutoReceiveInput::Player0;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->MaterialInstance = NULL;
    this->DecorationLayoutWidget = NULL;
    this->Pressed = 0;
    this->Decided = false;
    this->Passed = false;
    this->CapableCount = 1;
    this->LongPressThreshold = 0.00f;
    this->DecorationLayout = NULL;
    this->Button = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Button"));
    this->Root = (USceneComponent*)RootComponent;
    this->Expect = ERCActionKeyType::AK_None;
    this->Preemptive = false;
    this->MockupMode = false;
    this->DefaultIcon = NULL;
    this->SoundEnabled = true;
    this->SoundID_Spawn = TEXT("SYST_ComandAppear_000");
    this->SoundID_Pass = TEXT("SYST_ComandSuccess_000");
    this->SoundID_Fail = TEXT("SYST_ComandFailure_000");
    this->SelectionMode = false;
    this->Button->SetupAttachment(RootComponent);
}

void ARCActionButton::SetSoundEnabled(bool Enable) {
}

void ARCActionButton::SetSelectionMode(bool EnableSelection) {
}

void ARCActionButton::SetMockup(bool Mock) {
}

void ARCActionButton::SetExpectKey(ERCActionKeyType Key) {
}

void ARCActionButton::SetDecision(bool ForcePasse) {
}

void ARCActionButton::Reset() {
}

void ARCActionButton::OnPassed() {
}

void ARCActionButton::OnFailed(ERCActionFailureReason reason) {
}

void ARCActionButton::OnDeadline() {
}

void ARCActionButton::OnChangeInputPlatform(ERCInputPlatform InInputPlatform) {
}




void ARCActionButton::KillAfter(float in_sec) {
}

bool ARCActionButton::IsPaused() const {
    return false;
}

bool ARCActionButton::IsPassed() const {
    return false;
}

bool ARCActionButton::IsDecieded() const {
    return false;
}

bool ARCActionButton::IsActivated() const {
    return false;
}

bool ARCActionButton::GetMockup() const {
    return false;
}

float ARCActionButton::GetLastDecisionTime() const {
    return 0.0f;
}


