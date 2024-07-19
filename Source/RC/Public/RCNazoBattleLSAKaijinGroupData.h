#pragma once
#include "CoreMinimal.h"
#include "RCNazoBattleLSAKaijinData.h"
#include "RCNazoBattleLSAKaijinGroupData.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoBattleLSAKaijinGroupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCNazoBattleLSAKaijinData> KaijinDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultKaijinTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RebuttalKaijinTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName JumpingKaijinTag;
    
    RC_API FRCNazoBattleLSAKaijinGroupData();
};

