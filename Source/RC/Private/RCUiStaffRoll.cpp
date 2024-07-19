#include "RCUiStaffRoll.h"

URCUiStaffRoll::URCUiStaffRoll() {
    this->MainCanvas = NULL;
    this->Background = NULL;
    this->SettingData = NULL;
}

void URCUiStaffRoll::StartStaffRoll() {
}

void URCUiStaffRoll::StartMovie() {
}

void URCUiStaffRoll::SetStaffRollDataAsset(URCStaffRollDataAsset* Data) {
}

void URCUiStaffRoll::MovieFinishEvent() {
}

bool URCUiStaffRoll::IsInitializedStaffRoll() const {
    return false;
}

bool URCUiStaffRoll::IsFinished() const {
    return false;
}

bool URCUiStaffRoll::IsEndScroll() const {
    return false;
}

void URCUiStaffRoll::InitStaffRoll(float StartTime, float EndTime, float SpaceSize) {
}

float URCUiStaffRoll::GetMovieStartTime() const {
    return 0.0f;
}

float URCUiStaffRoll::GetFinishTime() const {
    return 0.0f;
}

void URCUiStaffRoll::FinishStaffRoll() {
}


