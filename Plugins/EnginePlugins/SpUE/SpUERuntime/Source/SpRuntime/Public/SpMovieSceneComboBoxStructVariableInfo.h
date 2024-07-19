#pragma once
#include "CoreMinimal.h"
#include "SpMovieSceneComboBoxStructVariableInfo.generated.h"

USTRUCT(BlueprintType)
struct FSpMovieSceneComboBoxStructVariableInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StructTypeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VariableName;
    
    SPRUNTIME_API FSpMovieSceneComboBoxStructVariableInfo();
};

