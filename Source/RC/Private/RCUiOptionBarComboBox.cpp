#include "RCUiOptionBarComboBox.h"

URCUiOptionBarComboBox::URCUiOptionBarComboBox() {
    this->AN_Open = NULL;
    this->AN_Close = NULL;
    this->AN_SlideOn = NULL;
    this->AN_SlideOff = NULL;
    this->MenuItemList = NULL;
}

void URCUiOptionBarComboBox::OnMenuOpenChangedEvent(bool bIsOpen) {
}

void URCUiOptionBarComboBox::OnClickItemEvent(int32 ind) {
}

void URCUiOptionBarComboBox::OnButtonClickEvent() {
}

UUserWidget* URCUiOptionBarComboBox::GetComboBoxListWidget() {
    return NULL;
}


