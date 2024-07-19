#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "RCNzPazzleBarrelBase.generated.h"

class ARCCharacterRender;
class ARCNzPazzleAnswerWordBase;
class ARCNzPazzleKaikagiActorBase;
class USceneComponent;
class UStaticMeshComponent;
class UTexture2D;

UCLASS(Blueprintable)
class RC_API ARCNzPazzleBarrelBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Scene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* upperAnswerWordRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* lowerAnswerWordRoot;
    
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
    USceneComponent* cameraParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float rotateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float rotateSpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float minRotateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float maxRotateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float minCamPitchRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float maxCamPitchRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvertCamPitchRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedCamPitchRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float maxPointerY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float minCamYawRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float maxCamYawRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvertCamYawRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedCamYawRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float maxPointerX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> kaikagiSpawnPointList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARCNzPazzleKaikagiActorBase*> kaikagiActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARCNzPazzleKaikagiActorBase> kaikagiBaseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShinigamiEatAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTaikutuWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTaikutuWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator BaseCameraRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarrelWordUpperAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarrelWordLowerAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarrelWordDepthOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarrelWordTextScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShinigamiAngleWord8;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShinigamiAngleWord12;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShinigamiAngleWord16;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitBarrelAngle;
    
public:
    ARCNzPazzleBarrelBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SwitchIsRotate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartNoMoveWaitTimer();
    
    UFUNCTION(BlueprintCallable)
    void SetRotateSpeedScale(float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetRotateSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetRotateCameraParentForPointer(FVector2D pointerPos);
    
    UFUNCTION(BlueprintCallable)
    void SetRotateCameraParent(FRotator NewRot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetKaikagiListLocation(const int32& Length);
    
    UFUNCTION(BlueprintCallable)
    void PlayVoice(ARCCharacterRender* InChara, FName VoiceID);
    
    UFUNCTION(BlueprintCallable)
    void InitializeKaikagiActor(const TArray<FString>& KaikagiNameList, const TArray<FString>& KaikagiTextList, const int32& Length);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeAnswerWord(const TArray<FText>& UpperTextList, const TArray<int32>& UpperTextPosList, const TArray<FText>& LowerTextList, const TArray<int32>& LowerTextPosList, const TArray<UTexture2D*>& UpperTextTextureList, const TArray<UTexture2D*>& LowerTextTextureList, FName SceneID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRotateSpeedScale();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRotateSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<ARCNzPazzleAnswerWordBase*> GetAnswerWordActorList();
    
    UFUNCTION(BlueprintCallable)
    void ChangeRotate(bool isRot);
    
    UFUNCTION(BlueprintCallable)
    void AddZoomCamera(float AddForward);
    
    UFUNCTION(BlueprintCallable)
    void AddRotateCameraParent(FRotator addRot);
    
};

