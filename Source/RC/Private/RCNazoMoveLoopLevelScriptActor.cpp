#include "RCNazoMoveLoopLevelScriptActor.h"

ARCNazoMoveLoopLevelScriptActor::ARCNazoMoveLoopLevelScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->State = ERCNazoMoveLoopLSAState::None;
    this->SettingsDataTable = NULL;
}




void ARCNazoMoveLoopLevelScriptActor::FinishMoveLoop() {
}



void ARCNazoMoveLoopLevelScriptActor::ChangePlayerSpeed(float Speed, float Time) {
}

void ARCNazoMoveLoopLevelScriptActor::ChangeCameraFromTag(FName CameraTag, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp) {
}

void ARCNazoMoveLoopLevelScriptActor::ChangeCameraBaseFromTag(FName CameraBaseTag, FName CameraTag, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp) {
}

void ARCNazoMoveLoopLevelScriptActor::ChangeCameraBase(AActor* CameraBase, ARCCineCameraActor* Camera, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp) {
}

void ARCNazoMoveLoopLevelScriptActor::ChangeCamera(ARCCineCameraActor* Camera, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp) {
}

void ARCNazoMoveLoopLevelScriptActor::ChangeBackCamera(float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp) {
}


