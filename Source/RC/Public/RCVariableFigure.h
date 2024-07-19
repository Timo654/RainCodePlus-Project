#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCVariableFigureAllInfo.h"
#include "RCVariableFigure.generated.h"

UCLASS(Blueprintable)
class RC_API URCVariableFigure : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableFigureAllInfo FigureAllInfo;
    
public:
    URCVariableFigure();

};

