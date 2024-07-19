#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCNzUiBattleUiAssetData.generated.h"

USTRUCT(BlueprintType)
struct FRCNzUiBattleUiAssetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAssistEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath AssistFaceTexturePath;
    
    RC_API FRCNzUiBattleUiAssetData();
};

