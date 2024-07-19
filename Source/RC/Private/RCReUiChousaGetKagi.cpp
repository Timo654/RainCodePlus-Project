#include "RCReUiChousaGetKagi.h"

URCReUiChousaGetKagi::URCReUiChousaGetKagi() {
    this->bChangeSpeed = true;
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->AN_Update_Start = NULL;
    this->AN_Update_Wait = NULL;
    this->AN_Update_Finish = NULL;
    this->Text_KagiName = NULL;
    this->Text_KagiCaption = NULL;
    this->Chapter = 0;
    this->KagiID = 0;
}

void URCReUiChousaGetKagi::SetKagiData(FName InKagiID, int32 InPhase) {
}

void URCReUiChousaGetKagi::SetData(FName InKagiImage, const FString& InKagiName, const FString& InKagiCaption) {
}

void URCReUiChousaGetKagi::Open() {
}

void URCReUiChousaGetKagi::InitializeChousaGetKagi() {
}

void URCReUiChousaGetKagi::Close() {
}


