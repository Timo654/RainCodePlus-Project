#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamGalleryMovieListTableRow.h"
#include "RCParamGalleryMovieListData.generated.h"

UCLASS(Blueprintable)
class URCParamGalleryMovieListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamGalleryMovieListTableRow> Data;
    
    URCParamGalleryMovieListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

