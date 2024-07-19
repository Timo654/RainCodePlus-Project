#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamGalleryBgmListTableRow.h"
#include "RCParamGalleryBgmListData.generated.h"

UCLASS(Blueprintable)
class URCParamGalleryBgmListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamGalleryBgmListTableRow> Data;
    
    URCParamGalleryBgmListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

