#include "RCWidgetActor.h"
#include "RC3DWidgetComponent.h"

ARCWidgetActor::ARCWidgetActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<URC3DWidgetComponent>(TEXT("WidgetComponent"));
    this->WidgetComponent = (URC3DWidgetComponent*)RootComponent;
}

void ARCWidgetActor::SetWidget(URCUiWidgetBase* InWidget) {
}

void ARCWidgetActor::SetActorVisibility(bool bInShow) {
}

URCUiWidgetBase* ARCWidgetActor::GetWidget() {
    return NULL;
}


