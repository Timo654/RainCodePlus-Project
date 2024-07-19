#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RCNzFinaleEditableSpawnPieceData.h"
#include "RCNzFinaleEditableManagerBase.generated.h"

class ARCNzFinalePieceBase;
class UDataTable;

UCLASS(Blueprintable)
class RC_API ARCNzFinaleEditableManagerBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetSceneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SectionDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PieceDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PiecePositionDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARCNzFinalePieceBase*> PieceActorList;
    
    ARCNzFinaleEditableManagerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnPieceActorList();
    
    UFUNCTION(BlueprintCallable)
    void GetSpawnPieceInfoList(TArray<FRCNzFinaleEditableSpawnPieceData>& dataList);
    
    UFUNCTION(BlueprintCallable)
    void GetAllPieceNameList(TArray<FName>& nameList);
    
    UFUNCTION(BlueprintCallable)
    void GetAllPieceInfoList(TArray<FRCNzFinaleEditableSpawnPieceData>& dataList);
    
};

