#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "ERCNazoBattleRebuttalLetterSize.h"
#include "RCNazoBattleRebuttalLetterData.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoBattleRebuttalLetterData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCNazoBattleRebuttalLetterSize Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath TexturePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor WispColor;
    
    RC_API FRCNazoBattleRebuttalLetterData();
};

