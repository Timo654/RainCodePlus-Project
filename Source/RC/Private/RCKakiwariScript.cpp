#include "RCKakiwariScript.h"
#include "RCScriptActorComponent.h"

ARCKakiwariScript::ARCKakiwariScript(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ScriptActorComp = CreateDefaultSubobject<URCScriptActorComponent>(TEXT("ScriptActorComp"));
    this->bDebugScriptDraw = false;
}


