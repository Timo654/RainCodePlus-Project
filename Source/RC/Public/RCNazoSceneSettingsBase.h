#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCNazoLevelSettings.h"
#include "RCNazoSceneSettingsBase.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoSceneSettingsBase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCNazoLevelSettings> LevelSettingsArray;
    
    RC_API FRCNazoSceneSettingsBase();
};

