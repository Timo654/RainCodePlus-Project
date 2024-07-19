#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RCNzFinalePieceBase.generated.h"

UCLASS(Blueprintable)
class RC_API ARCNzFinalePieceBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NameString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DetailString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName answerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PieceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PieceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isComplete;
    
public:
    ARCNzFinalePieceBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeFinalePiece(const FString& ImagePath, const int32& Type, const FName& NameTextID, const FName& TextID, const FName& NewAnswerID, const FName& NewPieceID);
    
    UFUNCTION(BlueprintCallable)
    FName GetAnswerPieceID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CompletePiece();
    
    UFUNCTION(BlueprintCallable)
    bool CheckPieceID(FName TargetID);
    
};

