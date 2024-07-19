#include "RCReUiChousaPointer.h"

URCReUiChousaPointer::URCReUiChousaPointer() {
    this->AN_Def_Start = NULL;
    this->AN_Def = NULL;
    this->AN_Def_Finish = NULL;
    this->AN_On_Start = NULL;
    this->AN_On = NULL;
    this->AN_On_Out = NULL;
    this->AN_Push = NULL;
    this->AN_On_Finish = NULL;
    this->AN_Question_Start = NULL;
    this->AN_Question = NULL;
    this->AN_Question_Out = NULL;
    this->AN_Question_Push = NULL;
    this->AN_Question_Finish = NULL;
}

void URCReUiChousaPointer::StartDefault() {
}

void URCReUiChousaPointer::SetTracingPosition(FVector2D In2DPosition, float InRadius) {
}

void URCReUiChousaPointer::SetTargetPosition(FVector2D In2DPosition) {
}

void URCReUiChousaPointer::SetQuestionFlag(bool bInQuestion) {
}

void URCReUiChousaPointer::OnMark() {
}

void URCReUiChousaPointer::OffMark() {
}

void URCReUiChousaPointer::InitializeChousaPointer() {
}

float URCReUiChousaPointer::GetWidgetRadius() {
    return 0.0f;
}

FVector2D URCReUiChousaPointer::GetMousePos() {
    return FVector2D{};
}

FVector2D URCReUiChousaPointer::GetCursorDirection() {
    return FVector2D{};
}

void URCReUiChousaPointer::FinishOverlap() {
}

void URCReUiChousaPointer::FinishDefault() {
}

void URCReUiChousaPointer::FinishCursor() {
}

void URCReUiChousaPointer::Decided() {
}


