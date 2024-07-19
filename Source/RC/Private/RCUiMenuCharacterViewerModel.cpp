#include "RCUiMenuCharacterViewerModel.h"

URCUiMenuCharacterViewerModel::URCUiMenuCharacterViewerModel() {
    this->AN_In = NULL;
    this->AN_Slide_Wait = NULL;
    this->AN_Slide_L = NULL;
    this->AN_Slide_R = NULL;
    this->AN_Out = NULL;
    this->CurrentSlideType = ERCUiMenuCharacterViewerModelSlideType::None;
}


