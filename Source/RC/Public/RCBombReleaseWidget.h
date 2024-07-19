#pragma once
#include "CoreMinimal.h"
#include "MistakeEventDelegate.h"
#include "RCParamBombReleaseTableRow.h"
#include "RCUserWidget.h"
#include "SuccessEventDelegate.h"
#include "RCBombReleaseWidget.generated.h"

class URCBombReleaseGame;
class URCBombReleaseStart;
class URCBombReleaseTitle;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCBombReleaseWidget : public URCUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSuccessEvent OnSuccessEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMistakeEvent OnMistakeEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCBombReleaseGame* WBP_MG_Bomb_Game;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCBombReleaseTitle* WBP_MG_Bomb_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCBombReleaseStart* WBP_MG_Bomb_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCParamBombReleaseTableRow bombParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 questionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isTitleAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isFinishStatusSuccess;
    
public:
    URCBombReleaseWidget();

    UFUNCTION(BlueprintCallable)
    void TutorialScene();
    
    UFUNCTION(BlueprintCallable)
    void TitleScene();
    
    UFUNCTION(BlueprintCallable)
    void Success(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StartScene();
    
    UFUNCTION(BlueprintCallable)
    void PreTutorialScene();
    
    UFUNCTION(BlueprintCallable)
    void PreTitleScene();
    
    UFUNCTION(BlueprintCallable)
    void PreSuccess();
    
    UFUNCTION(BlueprintCallable)
    void PreStartScene();
    
    UFUNCTION(BlueprintCallable)
    void PrePlayScene();
    
    UFUNCTION(BlueprintCallable)
    void PreGameOver();
    
    UFUNCTION(BlueprintCallable)
    void PreFinish();
    
    UFUNCTION(BlueprintCallable)
    void PlayScene(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void GameOver(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Finish();
    
};

