#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCSequenceSectionEndData_Base.h"
#include "RCSequenceSectionEndData_Character.h"
#include "RCSequenceSectionEndData_Subtitle.h"
#include "RCSequenceSectionEndData_Talk.h"
#include "RCSequence_NotifyLSADelegate.h"
#include "RCSequenceManager.generated.h"

class ALevelSequenceActor;
class ARCLevelSequenceActor;
class ARCSequenceFollowTarget;
class ULevelSequencePlayer;

UCLASS(Blueprintable)
class RC_API URCSequenceManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* TalkSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSequenceSectionEndData_Talk TalkSectionEndData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* SubtitleSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSequenceSectionEndData_Subtitle SubtitleSectionEndData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* ShinigamiSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShinigamiSequencerPlayDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCSequenceFollowTarget* ShinigamiSequenceFollowTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSequenceSectionEndData_Base LightOffsetSectionEndData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCSequenceSectionEndData_Character> FacialColorSectionEndDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCSequenceSectionEndData_Character> EmissiveSectionEndDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCSequenceSectionEndData_Character> HairSpecularSectionEndDataList;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSequence_NotifyLSA OnShinigamiSequencerFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSequence_NotifyLSA OnShinigamiSequencerCanceled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARCLevelSequenceActor*> LevelSequenceActorList;
    
public:
    URCSequenceManager();

protected:
    UFUNCTION(BlueprintCallable)
    void ShinigamiSequencer_Finished();
    
};

