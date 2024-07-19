#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERCSequenceShinigamiFollowTarget.h"
#include "ERCSequenceShinigamiFollowType.h"
#include "ERCSequenceShinigamiTransformTypeLS.h"
#include "ERCSequenceShinigamiTransformTypeLSA.h"
#include "RCSequenceBFL.generated.h"

class AActor;
class ALevelSequenceActor;
class ARCSequenceFollowTarget;
class ARCShinigamiLevelSequenceActor;
class ULevelSequence;
class UObject;
class URCSequenceManager;

UCLASS(Blueprintable)
class RC_API URCSequenceBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCSequenceBFL();

    UFUNCTION(BlueprintCallable)
    static void StopShinigamiSequencer(bool& bSucceeded, ALevelSequenceActor* LSA, bool bSpawn);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartShinigamiSequencerLSA2(bool& bSucceeded, UObject* WorldContextObject, ARCShinigamiLevelSequenceActor* ShinigamiLSA);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartShinigamiSequencerLSA(bool& bSucceeded, UObject* WorldContextObject, ALevelSequenceActor* LSA, bool bSpawn, ERCSequenceShinigamiTransformTypeLSA TransformType, AActor* Actor, FTransform Transform, ERCSequenceShinigamiFollowType FollowType, ERCSequenceShinigamiFollowTarget FollowTarget, AActor* FollowTargetActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartShinigamiSequencerLS(bool& bSucceeded, ALevelSequenceActor*& OutLSA, UObject* WorldContextObject, ULevelSequence* LS, bool bSpawn, ERCSequenceShinigamiTransformTypeLS TransformType, AActor* Actor, FTransform Transform, ERCSequenceShinigamiFollowType FollowType, ERCSequenceShinigamiFollowTarget FollowTarget, AActor* FollowTargetActor);
    
    UFUNCTION(BlueprintCallable)
    static void SetLSATransformActor(bool& bSucceeded, ALevelSequenceActor* LSA, AActor* TransformActor);
    
    UFUNCTION(BlueprintCallable)
    static void SetLSATransform(bool& bSucceeded, ALevelSequenceActor* LSA, FTransform Transform);
    
    UFUNCTION(BlueprintCallable)
    static void PlayShinigamiSequencer(bool& bSucceeded, ALevelSequenceActor* LSA, bool bSpawn);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void InitShinigamiSequencerLSA(bool& bSucceeded, UObject* WorldContextObject, ALevelSequenceActor* LSA, bool bSpawn, ERCSequenceShinigamiTransformTypeLSA TransformType, AActor* Actor, FTransform Transform, ERCSequenceShinigamiFollowType FollowType, ERCSequenceShinigamiFollowTarget FollowTarget, AActor* FollowTargetActor, ARCSequenceFollowTarget* FollowDummyActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void InitShinigamiSequencerLS(bool& bSucceeded, ALevelSequenceActor*& OutLSA, UObject* WorldContextObject, ULevelSequence* LS, bool bSpawn, ERCSequenceShinigamiTransformTypeLS TransformType, AActor* Actor, FTransform Transform, ERCSequenceShinigamiFollowType FollowType, ERCSequenceShinigamiFollowTarget FollowTarget, AActor* FollowTargetActor, ARCSequenceFollowTarget* FollowDummyActor);
    
    UFUNCTION(BlueprintCallable)
    static void GetShinigamiSequenceActor(ALevelSequenceActor*& OutLSA);
    
    UFUNCTION(BlueprintCallable)
    static void GetSequenceManager(URCSequenceManager*& SequenceManager);
    
    UFUNCTION(BlueprintCallable)
    static void CheckPlayingShinigamiSequencer(bool& bPlaying);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CancelShinigamiSequencer(bool& bSucceeded, UObject* WorldContextObject);
    
};

