#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCVariableFigureBFL.generated.h"

UCLASS(Blueprintable)
class RC_API URCVariableFigureBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCVariableFigureBFL();

    UFUNCTION(BlueprintCallable)
    static void SetFigure(FName InPersonID, int32 InFigureNum);
    
    UFUNCTION(BlueprintCallable)
    static bool IsFigure(FName InPersonID, int32 InFigureNum);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetFigureNum(FName InPersonID);
    
};

