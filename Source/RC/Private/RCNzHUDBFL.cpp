#include "RCNzHUDBFL.h"

URCNzHUDBFL::URCNzHUDBFL() {
}

ARCNzHUD* URCNzHUDBFL::GetNzHUD() {
    return NULL;
}

void URCNzHUDBFL::GetBattleCutinPriority(int32& Priority) {
}

void URCNzHUDBFL::CountdownWidgetOpen(bool& bSucceeded) {
}

bool URCNzHUDBFL::CountdownWidgetIsOpened() {
    return false;
}

bool URCNzHUDBFL::CountdownWidgetIsClosed() {
    return false;
}

void URCNzHUDBFL::CountdownWidgetClose(bool& bSucceeded, bool bTimerPause) {
}

void URCNzHUDBFL::CountdownStop(bool& bSucceeded) {
}

void URCNzHUDBFL::CountdownStartTime(bool& bSucceeded, int32 Hours, int32 Minutes, int32 Seconds, int32 Milliseconds, bool bWidgetOpen) {
}

void URCNzHUDBFL::CountdownStartSecond(bool& bSucceeded, float Time, bool bWidgetOpen) {
}

void URCNzHUDBFL::CountdownStartMillisecond(bool& bSucceeded, int32 Time, bool bWidgetOpen) {
}

void URCNzHUDBFL::CountdownSetProgressAndTime(bool& bSucceeded, int32 Progress) {
}

void URCNzHUDBFL::CountdownResume(bool& bSucceeded) {
}

void URCNzHUDBFL::CountdownRelease(bool& bSucceeded) {
}

void URCNzHUDBFL::CountdownPause(bool& bSucceeded) {
}

bool URCNzHUDBFL::CountdownIsInitialized() {
    return false;
}

void URCNzHUDBFL::CountdownInitialize(bool& bSucceeded) {
}

void URCNzHUDBFL::CountdownGetTime(bool& bSucceeded, int32& Hours, int32& Minutes, int32& Seconds, int32& Milliseconds) {
}

float URCNzHUDBFL::CountdownGetSeconds() {
    return 0.0f;
}

void URCNzHUDBFL::CountdownGetProgressAndTime(bool& bSucceeded, int32& Progress, int32& Hours, int32& Minutes, int32& Seconds, int32& Milliseconds) {
}

void URCNzHUDBFL::CountdownGetProgressAndSeconds(bool& bSucceeded, int32& Progress, float& Seconds) {
}

void URCNzHUDBFL::CountdownGetProgressAndMilliseconds(bool& bSucceeded, int32& Progress, int32& Milliseconds) {
}

int32 URCNzHUDBFL::CountdownGetMilliseconds() {
    return 0;
}


