#include "SpRuntimeEngineSettings.h"

USpRuntimeEngineSettings::USpRuntimeEngineSettings() {
    this->bAssertionOutputBlueprintCallstackEnable = true;
    this->DebugUIFontSize = 18;
    this->bShowDebugTelop = true;
    this->DebugTelopSpeed = 800;
    this->DebugTelopListHeight = 600;
    this->IsConsumerControllerSeparation = false;
    this->bDebugGuiEnable = true;
    this->bDebugGuiAlwaysRunStat = true;
    this->bDebugGuiMeterEnable = true;
    this->bDebugGuiMeterWideMode = false;
    this->DebugGuiMeterScale = 1.00f;
    this->DebugGuiMeterFrames = 4;
}


