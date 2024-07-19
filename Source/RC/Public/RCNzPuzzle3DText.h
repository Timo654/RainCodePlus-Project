#pragma once
#include "CoreMinimal.h"
#include "RCLocalizeText3DActor.h"
#include "RCNzPuzzle3DText.generated.h"

UCLASS(Blueprintable)
class RC_API ARCNzPuzzle3DText : public ARCLocalizeText3DActor {
    GENERATED_BODY()
public:
    ARCNzPuzzle3DText(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool CheckTextID(FName ID, FText& resultText);
    
};

