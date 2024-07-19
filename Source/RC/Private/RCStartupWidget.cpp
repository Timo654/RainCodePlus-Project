#include "RCStartupWidget.h"

URCStartupWidget::URCStartupWidget() {
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->Image_StartUpLogo = NULL;
    this->skippableTime = 2.00f;
    this->progressTime = 0.00f;
    this->isSkippable = false;
    this->isTimeCount = false;
    this->bIsLoadingImage = false;
}

void URCStartupWidget::SetTimeCount(bool isCount) {
}

void URCStartupWidget::SetSkippableTime(float Time) {
}

void URCStartupWidget::PlayWaitAnimation() {
}

void URCStartupWidget::PlayStartAnimation() {
}

void URCStartupWidget::PlayFinishAnimation() {
}

void URCStartupWidget::Open() {
}

bool URCStartupWidget::IsSkip() {
    return false;
}

bool URCStartupWidget::IsPlayingWaitAnimation() {
    return false;
}

bool URCStartupWidget::IsPlayingStartAnimation() {
    return false;
}

bool URCStartupWidget::IsPlayingFinishAnimation() {
    return false;
}

void URCStartupWidget::Close() {
}


