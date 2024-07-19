#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "RCParamNzFinaleDetectiveBackgroundImageTableRow.h"
#include "RCParamNzFinalePieceTableRow.h"
#include "Templates/SubclassOf.h"
#include "RCNzFinaleHeadingLineBase.generated.h"

class ARCNzFinaleManagerBase;
class ARCNzFinalePieceBase;
class UBoxComponent;

UCLASS(Blueprintable)
class RC_API ARCNzFinaleHeadingLineBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Extent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SectionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SectionNameTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SectionNameTextString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> pieceIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARCNzFinalePieceBase*> PieceActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> PieceQuestionStateList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCNzFinaleManagerBase* FinaleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARCNzFinalePieceBase> pieceActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamNzFinalePieceTableRow> PieceDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamNzFinaleDetectiveBackgroundImageTableRow> BackgroundImgDataList;
    
public:
    ARCNzFinaleHeadingLineBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdatePieceQuestionState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartSectionEnter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnPieceActors();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowSectionActor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowPieceActors();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeHeadingLine(FName NewSectionID, FName SectionTextID, const TArray<FName>& NewPieceIDList, ARCNzFinaleManagerBase* NewFinaleManager);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HiddenSectionActor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HiddenPieceActors();
    
    UFUNCTION(BlueprintCallable)
    TArray<bool> GetDetectivePointState();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDetectivepointNum();
    
    UFUNCTION(BlueprintCallable)
    FString GetDetectiveBackgroundImagePath();
    
};

