#include "RCSaveLoadListBar.h"

URCSaveLoadListBar::URCSaveLoadListBar() {
    this->SvLd_ListBar_Base = NULL;
    this->Text_ListNo = NULL;
    this->WidgetSwitcher_SaveType = NULL;
    this->Text_EpNo = NULL;
    this->Text_EpTitle = NULL;
    this->Text_SavePoint = NULL;
    this->Text_Date = NULL;
    this->Text_Time = NULL;
    this->Text_Empty = NULL;
    this->SvLd_Imag = NULL;
    this->AN_Default = NULL;
    this->AN_OnCursor = NULL;
    this->AN_OnCursor_Wait = NULL;
    this->AN_OutCursor = NULL;
    this->AN_Push = NULL;
    this->isSaveMode = false;
    this->isCurrentSelect = false;
    this->isFocus = false;
}


