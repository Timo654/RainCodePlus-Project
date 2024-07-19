#pragma once
#include "CoreMinimal.h"
#include "RCLevelScriptActor.h"
#include "RCBgLevelScriptActor.generated.h"

class AActor;
class ULightComponent;
class UMeshComponent;
class URCEventSubLevelList;
class URCSubLevelLoad;

UCLASS(Blueprintable)
class RC_API ARCBgLevelScriptActor : public ARCLevelScriptActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCSubLevelLoad* SubLevelLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCSubLevelLoad* AddSubLevelLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCEventSubLevelList* EventSubLevelList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCEventSubLevelList* EventCommonSubLevelList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCEventSubLevelList* EventSubQuestSubLevelList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCEventSubLevelList* EventCommonAddSubLevelList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventSubLevelListFilename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventCommonSubLevelListFilename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventSubQuestSubLevelListFilename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventCommonAddSubLevelListFilename;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapID;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapIDLong;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BgArea;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BgMapNum;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BgType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBgLoadReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangeSubLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableChangeSubLevel;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorHiddenList;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> MeshHiddenList;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<ULightComponent*> LightHiddenList;
    
public:
    ARCBgLevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool StartUnLoadSubLevelList(bool bLoadingDraw, bool bPlayerMove);
    
    UFUNCTION(BlueprintCallable)
    bool StartLoadSubLevelList(const TArray<FName>& InSubLevelNameList, bool bLoadingDraw, bool bPlayerMove);
    
    UFUNCTION(BlueprintCallable)
    void StartLoadCommonSubLevel();
    
    UFUNCTION(BlueprintCallable)
    bool StartLoadBgListMapID(FName InMapID, bool bLoadingDraw, bool bPlayerMove);
    
    UFUNCTION(BlueprintCallable)
    bool StartLoadBgList(int32 Area, int32 MapNum, int32 Type, bool bLoadingDraw, bool bPlayerMove);
    
    UFUNCTION(BlueprintCallable)
    bool StartAddLoadSubLevelList(const TArray<FName>& InSubLevelNameList, bool bLoadingDraw);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibility(bool bFlag, bool bIsActor);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseEventSubLevelList();
    
    UFUNCTION(BlueprintCallable)
    bool ReadyLoadBgListMapID(FName InMapID);
    
    UFUNCTION(BlueprintCallable)
    bool LoadEventSubLevelList(int32 InChapterNum, FName InSceneNum, FName InMapID, bool bCommonOnly);
    
    UFUNCTION(BlueprintCallable)
    bool LoadAllLevel(int32 InChapterNum, FName InSceneNum, FName InMapID, bool bCommonOnly);
    
    UFUNCTION(BlueprintCallable)
    bool IsVisibledSubLevel();
    
    UFUNCTION(BlueprintCallable)
    bool IsSyncSubLevel();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableSubLevel();
    
    UFUNCTION(BlueprintCallable)
    bool GetSubLevelList(TArray<FName>& OutSubLevelList, FName InMapID, bool bCommonOnly);
    
    UFUNCTION(BlueprintCallable)
    bool GetEventSettingList(TArray<FName>& OutEventSettingList, TArray<FName>& OutMapIDList, int32 InChapterNum, bool bCommonOnly);
    
    UFUNCTION(BlueprintCallable)
    bool GetCharacterSettingList(TArray<FName>& OutCharacterSettingList, FName InMapID, int32 InChapterNum, bool bCommonOnly);
    
    UFUNCTION(BlueprintCallable)
    int32 GetBgType();
    
    UFUNCTION(BlueprintCallable)
    int32 GetBgMapNum();
    
    UFUNCTION(BlueprintCallable)
    FName GetBgMapIDLong();
    
    UFUNCTION(BlueprintCallable)
    FName GetBgMapID();
    
    UFUNCTION(BlueprintCallable)
    int32 GetBgArea();
    
    UFUNCTION(BlueprintCallable)
    void DisableChangeSubLevel();
    
};

