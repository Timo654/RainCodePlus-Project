#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "RCNzPazzleKaikagiActorBase.generated.h"

class UBoxComponent;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class RC_API ARCNzPazzleKaikagiActorBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Scene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* Box;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString kaikagiName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString kaikagiCapText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KaikagiNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform StartTransform;
    
public:
    ARCNzPazzleKaikagiActorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStartTransform(FTransform Transform, AActor* ParentActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetKaikagiTextSize(const int32 Size);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void KaikagiRelease();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void KaikagiHold();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Initialize(const FString& NewKaikagiName, const FString& NewKaikagiCapText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HoldMove(const FVector nextLocation);
    
    UFUNCTION(BlueprintCallable)
    FString GetNameText();
    
    UFUNCTION(BlueprintCallable)
    void GetKaikagiTextData(FString& nameText, FString& capText);
    
    UFUNCTION(BlueprintCallable)
    FString GetCapText();
    
};

