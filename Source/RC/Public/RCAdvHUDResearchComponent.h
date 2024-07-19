#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERCAdvHUDResearchDetailType.h"
#include "ERCAdvHUDResearchModeState.h"
#include "ERCAdvHUDWidgetRequest.h"
#include "ERCAdvHUDWidgetState.h"
#include "ERCInputPlatform.h"
#include "RCAdvHUDBaseComponent.h"
#include "RCAdvHUDResearchDetailData.h"
#include "RCAdvHUDResearchDetailStartData.h"
#include "RCAdvHUDResearchMarkerData.h"
#include "RCAdvHUDResearchMarkerWidgetSet.h"
#include "RCAdvHUDResearchPointer_MouseControlData.h"
#include "RCAdvHUDResearchComponent.generated.h"

class ARCCheckActor;
class URCReUiChousaEndButtonGuide;
class URCReUiChousaFPSCameraLimit;
class URCReUiChousaGetKagi;
class URCReUiChousaPointer;
class URCReUiChousaQuestionText;
class URCReUiChousaSpotSelectTelop;
class URCReUiChousaTelop;
class URCReUiChousaTelopSpotJudge;
class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RC_API URCAdvHUDResearchComponent : public URCAdvHUDBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowEditInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNazo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDResearchModeState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDResearchModeState OldState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAdvHUDResearchDetailStartData ResearchDetailStartData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAdvHUDResearchDetailData ResearchDetailData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDResearchDetailType ResearchDetailType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDResearchDetailType ResearchDetailOldType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResearchDetailDebugDrawMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResearchDetailInputEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResearchDetailInputRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResearchDetailDebugDrawInputLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartTelopPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCReUiChousaTelop* StartTelopWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FinishTelopPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCReUiChousaTelop* FinishTelopWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpotSelectStartTelopPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCReUiChousaSpotSelectTelop* SpotSelectStartTelopWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpotJudgePriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCReUiChousaTelopSpotJudge* SpotJudgeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GetKagiPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCReUiChousaGetKagi* GetKagiWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMarkerEnable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FRCAdvHUDResearchMarkerWidgetSet> MarkerWidgetSets;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FRCAdvHUDResearchMarkerWidgetSet> FreeMarkerWidgetSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMarker3D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Marker3DScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMarkerHiddenByTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAccessableMarkerHiddenByTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MarkerMaxNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UsingMarkerNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FRCAdvHUDResearchMarkerData> MarkerDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMarkerName2Test;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMarkerNameMoveDebugDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MarkerNameDefaultPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMarkerNameBasePositionCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerNameBasePositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerNameMoveDistanceZUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerNameMoveDistanceZDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerMoveLocationZUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerMoveLocationZDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MarkerNameNotMoveArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MarkerNameNotMoveArea2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MarkerNameNotMoveAreaUpperLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MarkerNameNotMoveAreaLowerRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MarkerNameNotMoveArea2UpperLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MarkerNameNotMoveArea2LowerRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MarkerNameMoveFitArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MarkerNameMoveFitAreaUpperLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MarkerNameMoveFitAreaLowerRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerNameAvoidCircleRudius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MarkerNameSizeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerNameMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMarkerNameMoveSimple;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMarkerNameMoveSimpleFixedDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerNameMoveSimpleFixedDistanceUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerNameMoveSimpleFixedDistanceDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetState PointerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetState PointerOldState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetRequest PointerRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PointerPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCReUiChousaPointer* PointerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAdvHUDResearchPointer_MouseControlData PointerMouseControlData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* SoftwareCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* BufferCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCReUiChousaFPSCameraLimit* FPSCameraLimitWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FPSCameraLimitPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuestionTextPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCReUiChousaQuestionText* QuestionTextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndButtonGuidePriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCReUiChousaEndButtonGuide* EndButtonGuideWidget;
    
public:
    URCAdvHUDResearchComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool StartTelopStart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool StartTelopCheckFinished();
    
    UFUNCTION(BlueprintCallable)
    bool SpotSelectStartTelopStart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SpotSelectStartTelopCheckFinished();
    
    UFUNCTION(BlueprintCallable)
    bool SpotJudgeTelopMistakeStart();
    
    UFUNCTION(BlueprintCallable)
    bool SpotJudgeTelopCorrectStart();
    
    UFUNCTION(BlueprintCallable)
    void SetMarkerEnable(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    bool SetMarkerData(ARCCheckActor* InCheckActor, FName InTextID, bool bInDraw, bool bInNameDraw, bool bInResearched, bool bInAccessable, float InScale);
    
    UFUNCTION(BlueprintCallable)
    bool ResearchStartWithQuestionText(FName InQuestionTextID, bool bInEnableFinish, bool bInMiniMap);
    
    UFUNCTION(BlueprintCallable)
    bool ResearchStart(bool bInShowLocation, bool bInEnableFinish, bool bInMiniMap);
    
    UFUNCTION(BlueprintCallable)
    bool ResearchFinish();
    
    UFUNCTION(BlueprintCallable)
    bool ResearchDetailStart(FRCAdvHUDResearchDetailStartData InStartData, ERCAdvHUDResearchDetailType InType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERCAdvHUDResearchDetailType ResearchDetailGetType();
    
    UFUNCTION(BlueprintCallable)
    int32 ResearchDetailGetSelectIndex();
    
    UFUNCTION(BlueprintCallable)
    int32 ResearchDetailGetAccessedIndex();
    
    UFUNCTION(BlueprintCallable)
    bool ResearchDetailFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ResearchDetailCheckAutoSelectMoveFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ResearchDetailCheck();
    
    UFUNCTION(BlueprintCallable)
    bool ResearchDetailAutoSelectMoveStart(int32 InMarkerDataIndex);
    
    UFUNCTION(BlueprintCallable)
    bool ResearchDetailAutoSelectCheckActorMoveStart(ARCCheckActor* InCheckActor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMenuOpenMouseSettings();
    
    UFUNCTION(BlueprintCallable)
    void OnMenuCloseMouseSettings();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeInputPlatform(ERCInputPlatform InInputPlatform);
    
public:
    UFUNCTION(BlueprintCallable)
    bool LocationStart(FName InLocationID, FName InLocationTextID);
    
    UFUNCTION(BlueprintCallable)
    bool LocationFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool LocationCheckFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMarkerVisible(ARCCheckActor* InCheckActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERCAdvHUDResearchModeState GetResearchModeState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERCAdvHUDResearchModeState GetResearchModeOldState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMarkerDataNum();
    
    UFUNCTION(BlueprintCallable)
    void GetMarkerData(int32 InIndex, bool& bOutSucceeded, FRCAdvHUDResearchMarkerData& OutMarkerData);
    
    UFUNCTION(BlueprintCallable)
    bool GetKagiStart();
    
    UFUNCTION(BlueprintCallable)
    bool GetKagiSetDataFromKagiID(FName InKagiID, int32 InPhase);
    
    UFUNCTION(BlueprintCallable)
    bool GetKagiSetData_Debug(FName InKagiImage, const FString& InKagiName, const FString& InKagiCaption);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetKagiCheckFinished();
    
    UFUNCTION(BlueprintCallable)
    bool FinishTelopStart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FinishTelopCheckFinished();
    
};

