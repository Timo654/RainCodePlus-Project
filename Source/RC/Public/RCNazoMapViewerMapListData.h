#pragma once
#include "CoreMinimal.h"
#include "RCNazoMapLevelSettingsBG.h"
#include "RCNazoMapSettingsBG.h"
#include "RCNazoMapViewerMapListData.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoMapViewerMapListData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCNazoMapSettingsBG> MapList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCNazoMapLevelSettingsBG> MapLevel00List;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCNazoMapLevelSettingsBG> MapLevel01List;
    
    RC_API FRCNazoMapViewerMapListData();
};

