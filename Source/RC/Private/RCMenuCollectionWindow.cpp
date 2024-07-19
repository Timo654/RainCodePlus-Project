#include "RCMenuCollectionWindow.h"

URCMenuCollectionWindow::URCMenuCollectionWindow() {
    this->Txt_Header = NULL;
    this->Txt_Label = NULL;
    this->Txt_Conditions_00 = NULL;
    this->Txt_Conditions_01 = NULL;
    this->Txt_Conditions_02 = NULL;
    this->Button_000 = NULL;
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->IsFinished = false;
    this->isDecide = false;
}

void URCMenuCollectionWindow::PushDecide() {
}

UWidget* URCMenuCollectionWindow::CollectionSelectNavigation(EUINavigation InNavigation) {
    return NULL;
}


