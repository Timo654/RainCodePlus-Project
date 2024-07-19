#include "RCNzHUD.h"

ARCNzHUD::ARCNzHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->Components.AddDefaulted(4);
    this->HPGauge = NULL;
    this->HintWidget = NULL;
    this->GameOverWidget = NULL;
    this->SkillInfoListWidget = NULL;
    this->CountdownWidget = NULL;
    this->CountdownTimer = NULL;
}

bool ARCNzHUD::SkillInfoListStartByType(const TArray<ERCSkillFunctionType>& skillFunctionTypeList) {
    return false;
}

bool ARCNzHUD::SkillInfoListStart(const TArray<FName>& skillNameTextIDList) {
    return false;
}

bool ARCNzHUD::SkillInfoListIsFinished() const {
    return false;
}

bool ARCNzHUD::HPGaugeStart() {
    return false;
}

bool ARCNzHUD::HPGaugeRecoverForScene(int32& OutResultHP, bool bInSilence) {
    return false;
}

bool ARCNzHUD::HPGaugeRecover(int32 InRecover, int32& OutResultHP, bool bInSilence) {
    return false;
}

ERCAdvHUDWidgetState ARCNzHUD::HPGaugeGetState() {
    return ERCAdvHUDWidgetState::None;
}

bool ARCNzHUD::HPGaugeFinish() {
    return false;
}

bool ARCNzHUD::HPGaugeDamageForScene(int32& OutResultHP, bool bInSilence) {
    return false;
}

bool ARCNzHUD::HPGaugeDamage(int32 InDamage, int32& OutResultHP, bool bInSilence) {
    return false;
}

bool ARCNzHUD::HintStart(FName HintTextId) {
    return false;
}

bool ARCNzHUD::HintIsFinished() {
    return false;
}

bool ARCNzHUD::GameOverStart() {
    return false;
}

bool ARCNzHUD::GameOverIsFinished() {
    return false;
}

int32 ARCNzHUD::GameOverGetSelectedIndex() {
    return 0;
}

bool ARCNzHUD::CountdownWidgetOpen() {
    return false;
}

bool ARCNzHUD::CountdownWidgetIsOpened() {
    return false;
}

bool ARCNzHUD::CountdownWidgetIsClosed() {
    return false;
}

bool ARCNzHUD::CountdownWidgetClose(bool bInTimerPause) {
    return false;
}

bool ARCNzHUD::CountdownStop() {
    return false;
}

bool ARCNzHUD::CountdownStartTime(int32 InHours, int32 InMinutes, int32 InSeconds, int32 InMilliseconds, bool bInWidgetOpen) {
    return false;
}

bool ARCNzHUD::CountdownStartSecond(float InTime, bool bInWidgetOpen) {
    return false;
}

bool ARCNzHUD::CountdownStartMillisecond(int32 InTime, bool bInWidgetOpen) {
    return false;
}

bool ARCNzHUD::CountdownSetProgressAndTime(int32 InProgress) {
    return false;
}

bool ARCNzHUD::CountdownResume() {
    return false;
}

bool ARCNzHUD::CountdownRelease() {
    return false;
}

bool ARCNzHUD::CountdownPause() {
    return false;
}

bool ARCNzHUD::CountdownIsInitialized() {
    return false;
}

bool ARCNzHUD::CountdownInitialize() {
    return false;
}

bool ARCNzHUD::CountdownGetTime(int32& OutHours, int32& OutMinutes, int32& OutSeconds, int32& OutMilliseconds) {
    return false;
}

float ARCNzHUD::CountdownGetSeconds() {
    return 0.0f;
}

bool ARCNzHUD::CountdownGetProgressAndTime(int32& OutProgress, int32& OutHours, int32& OutMinutes, int32& OutSeconds, int32& OutMilliseconds) {
    return false;
}

bool ARCNzHUD::CountdownGetProgressAndSeconds(int32& OutProgress, float& OutSeconds) {
    return false;
}

bool ARCNzHUD::CountdownGetProgressAndMilliseconds(int32& OutProgress, int32& OutMilliseconds) {
    return false;
}

int32 ARCNzHUD::CountdownGetMilliseconds() {
    return 0;
}


