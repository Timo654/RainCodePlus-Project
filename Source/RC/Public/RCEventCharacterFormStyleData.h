#pragma once
#include "CoreMinimal.h"
#include "RCEventCharacterFormStyleData.generated.h"

USTRUCT(BlueprintType)
struct FRCEventCharacterFormStyleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DeleteMeshName;
    
    RC_API FRCEventCharacterFormStyleData();
};

