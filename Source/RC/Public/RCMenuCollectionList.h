#pragma once
#include "CoreMinimal.h"
#include "RCMenuManager.h"
#include "RCMenuCollectionList.generated.h"

class URCMenuCollectionListBar;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCMenuCollectionList : public URCMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCMenuCollectionListBar* Collect_ListBar_00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCMenuCollectionListBar* Collect_ListBar_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCMenuCollectionListBar* Collect_ListBar_02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCMenuCollectionListBar* Collect_ListBar_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCMenuCollectionListBar* Collect_ListBar_04;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URCMenuCollectionListBar*> listBarArray;
    
public:
    URCMenuCollectionList();

};

