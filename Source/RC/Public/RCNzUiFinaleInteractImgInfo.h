#pragma once
#include "CoreMinimal.h"
#include "RCNzUiFinaleInteractImgInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FRCNzUiFinaleInteractImgInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Img;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isPick;
    
    RC_API FRCNzUiFinaleInteractImgInfo();
};

