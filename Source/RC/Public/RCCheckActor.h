#pragma once
#include "CoreMinimal.h"
#include "ERCActorQuestType.h"
#include "ERCRealCheckActorResearchVisionTimeType.h"
#include "ERCRealCheckActorType.h"
#include "RCActor.h"
#include "RCCheckActorChangeDelegate.h"
#include "RCCheckActor.generated.h"

UCLASS(Blueprintable)
class RC_API ARCCheckActor : public ARCActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugScriptDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCRealCheckActorType UIType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CheckNameTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CheckLabelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerLookEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAreaMoveStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextMapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextPlayerStartName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCRealCheckActorResearchVisionTimeType ResearchVisionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FigurePersonID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FigureNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckNameLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckIconLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckNameCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckNameHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VariableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VariableArrayNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VariableCheckNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckNameDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckIconDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCActorQuestType QuestType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QuestTitleName;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCCheckActorChange OnCheckChangeEvent;
    
    ARCCheckActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetResearchVisionType(ERCRealCheckActorResearchVisionTimeType InResearchVisionType);
    
    UFUNCTION(BlueprintCallable)
    void SetNextPlayerStartName(FName InPlayerStartName);
    
    UFUNCTION(BlueprintCallable)
    void SetNextMapID(FName InMapID);
    
    UFUNCTION(BlueprintCallable)
    void SetFigurePersonID(FName InFigurePersonID);
    
    UFUNCTION(BlueprintCallable)
    void SetFigureNum(int32 InFigureNum);
    
    UFUNCTION(BlueprintCallable)
    void SetCheckSetting(bool bInCheck);
    
    UFUNCTION(BlueprintCallable)
    void SetCheckNameTextId(FName InTextID);
    
    UFUNCTION(BlueprintCallable)
    void SetCheckIconSetting(bool bInCheckIcon);
    
    UFUNCTION(BlueprintCallable)
    void SetCheckFinish(bool bInCheck);
    
    UFUNCTION(BlueprintCallable)
    void SetAreaMoveStop(bool bInAreaMoveStop);
    
    UFUNCTION(BlueprintCallable)
    bool IsCheckSetting();
    
    UFUNCTION(BlueprintCallable)
    bool IsCheckIconSetting();
    
    UFUNCTION(BlueprintCallable)
    bool IsCheckFinish();
    
    UFUNCTION(BlueprintCallable)
    bool IsAreaMoveStop();
    
    UFUNCTION(BlueprintCallable)
    ERCRealCheckActorResearchVisionTimeType GetResearchVisionType();
    
    UFUNCTION(BlueprintCallable)
    FName GetNextPlayerStartName();
    
    UFUNCTION(BlueprintCallable)
    FName GetNextMapID();
    
    UFUNCTION(BlueprintCallable)
    FName GetFigurePersonID();
    
    UFUNCTION(BlueprintCallable)
    int32 GetFigureNum();
    
    UFUNCTION(BlueprintCallable)
    FName GetCheckNameTextId();
    
};

