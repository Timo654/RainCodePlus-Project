#include "RCTitleLogo.h"

URCTitleLogo::URCTitleLogo() {
    this->Button = NULL;
    this->Text_CopyLight = NULL;
    this->Text_UserID = NULL;
    this->Text_VersionNum = NULL;
    this->TitleLogoImage = NULL;
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->isCheckPushKey = false;
    this->bIsLoadingImage = false;
}

void URCTitleLogo::OnFinishedGenericWindow_ToTerminateGame(bool res) {
}


