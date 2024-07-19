#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RCNzPazzleAnswerWordBase.generated.h"

UCLASS(Blueprintable)
class RC_API ARCNzPazzleAnswerWordBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> AnswerIndexList;
    
public:
    ARCNzPazzleAnswerWordBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void LoadAnswerList(FName SceneWordID, int32 targetBarrelIndex);
    
    UFUNCTION(BlueprintCallable)
    bool AnswerCheck(int32 answerID);
    
};

