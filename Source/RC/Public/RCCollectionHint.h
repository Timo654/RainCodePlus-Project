#pragma once
#include "CoreMinimal.h"
#include "RCCollectionHint.generated.h"

class URCMenuCollectionClear;
class UTextBlock;

USTRUCT(BlueprintType)
struct FRCCollectionHint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTextBlock*> epTextArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCMenuCollectionClear* clearImage;
    
    RC_API FRCCollectionHint();
};

