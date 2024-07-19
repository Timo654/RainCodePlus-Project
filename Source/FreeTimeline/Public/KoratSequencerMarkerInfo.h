#pragma once
#include "CoreMinimal.h"
#include "KoratSequencerMarkerInfo.generated.h"

USTRUCT(BlueprintType)
struct FKoratSequencerMarkerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Duration;
    
    FREETIMELINE_API FKoratSequencerMarkerInfo();
};

