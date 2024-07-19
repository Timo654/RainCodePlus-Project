#pragma once
#include "CoreMinimal.h"
#include "RCCharacterFormStyleData.generated.h"

USTRUCT(BlueprintType)
struct FRCCharacterFormStyleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DeleteMeshName;
    
    RC_API FRCCharacterFormStyleData();
};

