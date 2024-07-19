#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCCharaIntegrationIDToFaceID.generated.h"

USTRUCT(BlueprintType)
struct FRCCharaIntegrationIDToFaceID : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SceneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IntegrationID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FaceID;
    
    RC_API FRCCharaIntegrationIDToFaceID();
};

