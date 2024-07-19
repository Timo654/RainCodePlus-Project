#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCVariableGameMenuCollectionMenuInfo.h"
#include "RCVariableGameMenuCollection.generated.h"

UCLASS(Blueprintable)
class RC_API URCVariableGameMenuCollection : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableGameMenuCollectionMenuInfo CollectionMenuInfo;
    
public:
    URCVariableGameMenuCollection();

};

