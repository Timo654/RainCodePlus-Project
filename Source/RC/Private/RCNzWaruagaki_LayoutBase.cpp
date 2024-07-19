#include "RCNzWaruagaki_LayoutBase.h"

URCNzWaruagaki_LayoutBase::URCNzWaruagaki_LayoutBase() {
    this->Logo = NULL;
    this->KaikagiSelect = NULL;
    this->ButtonGuideWidget = NULL;
    this->InformationWidget = NULL;
    this->HPGauge = NULL;
}

void URCNzWaruagaki_LayoutBase::ShowStartLogoAnimFinishedEvent() {
}

void URCNzWaruagaki_LayoutBase::ShowButtonGuide(bool IsNormalMode) {
}

void URCNzWaruagaki_LayoutBase::SetKaiKagiName(FName InTextID) {
}

void URCNzWaruagaki_LayoutBase::SetHP(int32 OldHP, int32 NewHP, bool PlayDamageAnimation) {
}

void URCNzWaruagaki_LayoutBase::ReleaseWaruagakiLayout() {
}

void URCNzWaruagaki_LayoutBase::PlayWaruagakiLogoShowAnim() {
}

void URCNzWaruagaki_LayoutBase::InitializeWaruagakiUI() {
}

void URCNzWaruagaki_LayoutBase::InitializeKaikagiQuestionAndInfoUI_Implementation(const FString& Heading, const FString& question) {
}

void URCNzWaruagaki_LayoutBase::HideButtonGuide() {
}


