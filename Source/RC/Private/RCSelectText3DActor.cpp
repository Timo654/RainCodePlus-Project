#include "RCSelectText3DActor.h"

ARCSelectText3DActor::ARCSelectText3DActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExpressionType = ERCSelectTextExpressionType::ChangeMaterials;
    this->NormalFrontMaterial = NULL;
    this->SelectFrontMaterial = NULL;
    this->NonSelectFrontMaterial = NULL;
    this->EdgeMaterial = NULL;
    this->FrontMaterialInstance = NULL;
    this->TargetType = ERCSelectTextTargetType::CheckActor;
    this->ColorScale_Normal = 1.00f;
    this->ColorScale_Select = 25.00f;
    this->ColorScale_NonSelect = 0.20f;
    this->SelectStatus = ERCSelectTextSelectStatus::Non;
    this->bCheckActorInit = false;
    this->SelectCheckActor = NULL;
    this->SelectEventTrigger = NULL;
}

void ARCSelectText3DActor::SetTextColor(FLinearColor InTextColor) {
}

void ARCSelectText3DActor::SetSelectStatus(ERCSelectTextSelectStatus InStatus) {
}

ERCSelectTextSelectStatus ARCSelectText3DActor::GetSelectStatus() {
    return ERCSelectTextSelectStatus::Non;
}


