#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "RCNzPuzzleCameraActor.generated.h"

class ARCNzPazzleKaikagiActorBase;
class USceneComponent;

UCLASS(Blueprintable)
class RC_API ARCNzPuzzleCameraActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* kaikagi_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* kaikagi_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* kaikagi_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* kaikagi_4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* kaikagi_5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* kaikagi_6;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> kaikagiSpawnPointList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARCNzPazzleKaikagiActorBase*> kaikagiActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARCNzPazzleKaikagiActorBase> kaikagiBaseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KaikagiDepthPos;
    
public:
    ARCNzPuzzleCameraActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetZoomLength(float Length);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetKaikagiListLocation(const int32& Length);
    
    UFUNCTION(BlueprintCallable)
    void InitializeKaikagiActor(const TArray<FString>& KaikagiNameList, const TArray<FString>& KaikagiTextList, const int32& Length, const int32 WordSize);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetKaikagiDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CalcKaikagiSpawnLocationList(const TArray<FVector>& locList, const TArray<FVector>& dirList, const TArray<FVector>& HintDirList);
    
};

