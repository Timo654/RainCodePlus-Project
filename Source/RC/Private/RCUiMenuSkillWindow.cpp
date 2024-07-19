#include "RCUiMenuSkillWindow.h"

URCUiMenuSkillWindow::URCUiMenuSkillWindow() {
    this->bEnablePause = false;
    this->AN_Start = NULL;
    this->AN_Wait = NULL;
    this->AN_Finish = NULL;
    this->Txt_SkillName = NULL;
    this->Txt_SkillPoint_Current = NULL;
    this->Txt_SkillPoint_After = NULL;
    this->Txt_UsedPoint_Current = NULL;
    this->Txt_MaxPoint_Current = NULL;
    this->Txt_UsedPoint_After = NULL;
    this->Txt_MaxPoint_After = NULL;
    this->Txt_SystemMessage = NULL;
}

void URCUiMenuSkillWindow::WaitingOpen() {
}

void URCUiMenuSkillWindow::Wait() {
}

void URCUiMenuSkillWindow::SetSkillWindowText(FName InSkillMode, FName InSkillID) {
}

void URCUiMenuSkillWindow::Open() {
}

bool URCUiMenuSkillWindow::IsGetButtonResult() {
    return false;
}

bool URCUiMenuSkillWindow::IsFinishSkillWindow() {
    return false;
}

void URCUiMenuSkillWindow::InitializeSkillWindow() {
}

void URCUiMenuSkillWindow::Close() {
}


