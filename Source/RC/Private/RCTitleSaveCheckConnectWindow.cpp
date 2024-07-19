#include "RCTitleSaveCheckConnectWindow.h"

URCTitleSaveCheckConnectWindow::URCTitleSaveCheckConnectWindow() {
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->AN_Off = NULL;
    this->SelectIndex = 0;
    this->bListLoop = false;
}

UWidget* URCTitleSaveCheckConnectWindow::WindowListSelectNavigationSolo(EUINavigation InNavigation) {
    return NULL;
}

UWidget* URCTitleSaveCheckConnectWindow::WindowListSelectNavigation(EUINavigation InNavigation) {
    return NULL;
}


