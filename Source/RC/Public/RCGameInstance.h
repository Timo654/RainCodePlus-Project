#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ERCDlcInstall.h"
#include "ERCProduction.h"
#include "RCGameInstance.generated.h"

class ARCMovieManager;
class ARCSoundManager;
class IRCPlatformUserInterface;
class URCPlatformUserInterface;
class IRCPlatformUserReactProcessInterface;
class URCPlatformUserReactProcessInterface;
class URCAchievementManager;
class URCActivityManager;
class URCAssetManager;
class URCBgActorManager;
class URCCharacterProxyManager;
class URCDebugAutoMoveManager;
class URCDebugAutoPlayManager;
class URCEffectManager;
class URCForceFeedBackManager;
class URCHardwareManager;
class URCInstallManager;
class URCLoadingManager;
class URCOnlineStoreManager;
class URCRainActorManager;
class URCRealEventManager;
class URCSaveGameManager;
class URCSceneChangeMediator;
class URCScreenshotManager;
class URCSequenceManager;
class URCTimeManager;
class URCTipsManager;
class URCVariableManager;

UCLASS(Blueprintable, NonTransient)
class RC_API URCGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCAssetManager* AssetManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCLoadingManager* LoadingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCCharacterProxyManager* CharacterProxyManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCEffectManager* EffectManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCVariableManager* VariableManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCSequenceManager* SequenceManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCBgActorManager* BgActorManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCTimeManager* TimeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCSoundManager* SoundManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCMovieManager* MovieManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCSaveGameManager* SaveGameManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCAchievementManager* AchievementManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCOnlineStoreManager* OnlineStoreManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCInstallManager* InstallManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCActivityManager* ActivityManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCRealEventManager* RealEventManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCHardwareManager* HardwareManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCForceFeedBackManager* ForceFeedBackManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCRainActorManager* RainActorManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCTipsManager* TipsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCDebugAutoPlayManager* DebugAutoPlayManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCDebugAutoMoveManager* DebugAutoMoveManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCSceneChangeMediator* SceneChangeMediator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCScreenshotManager* ScreenshotManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IRCPlatformUserInterface> PlatformUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IRCPlatformUserReactProcessInterface> PlatformUserReactProcess;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCharacterViewerMode;
    
    URCGameInstance();

    UFUNCTION(BlueprintCallable)
    static void SetStatusProduction(ERCProduction InProduction);
    
    UFUNCTION(BlueprintCallable)
    static void SetDrawDebugPrint(bool bDebugDraw);
    
    UFUNCTION(BlueprintCallable)
    static void QuitGame();
    
    UFUNCTION(BlueprintCallable)
    static void PrintLogBlueprintCallstack();
    
    UFUNCTION(BlueprintCallable)
    static bool IsStatusGalleryEnable();
    
    UFUNCTION(BlueprintCallable)
    static bool IsStatusDlcInstall(ERCDlcInstall InDlc);
    
    UFUNCTION(BlueprintCallable)
    static ERCProduction GetStatusProduction();
    
    UFUNCTION(BlueprintCallable)
    static ARCSoundManager* GetSoundManager();
    
    UFUNCTION(BlueprintCallable)
    static TScriptInterface<IRCPlatformUserInterface> GetPlatformUser();
    
    UFUNCTION(BlueprintCallable)
    static ARCMovieManager* GetMovieManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URCEffectManager* GetEffectManager();
    
    UFUNCTION(BlueprintCallable)
    static void CheckAssetList();
    
};

