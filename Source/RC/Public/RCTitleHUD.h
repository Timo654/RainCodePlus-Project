#pragma once
#include "CoreMinimal.h"
#include "RCUiFaderHUD.h"
#include "RCTitleHUD.generated.h"

class URCMenuCollectionLayout;
class URCMenuCollectionWindow;
class URCNzResult;
class URCTitleChapterSelect;
class URCTitleGalleryBase;
class URCTitleLanguage;
class URCTitleLicense;
class URCTitleLogo;
class URCTitleMenu;
class URCTitleSaveCheck;
class URCTitleSaveCheckConnect;
class URCTitleSubStory;
class URCUiGenericWindow;
class URCUiTutorialWindow;

UCLASS(Blueprintable, NonTransient)
class RC_API ARCTitleHUD : public ARCUiFaderHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GenericWindowPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiGenericWindow* GenericWindowWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollectionMenuWidgetPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCMenuCollectionLayout* CollectionMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollectionWindowWidgetPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCMenuCollectionWindow* CollectionWindowWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TitleLogoWidgetPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCTitleLogo* TitleLogoWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TitleLangaugeWidgetPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCTitleLanguage* TitleLanguageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TitleChapterSelectWidgetPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCTitleChapterSelect* TitleChapterSelectWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChapterSelectSceneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChapterSelectChapterNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TitleSaveCheckWidgetPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCTitleSaveCheck* TitleSaveCheckWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TitleSaveCheckConnectWidgetPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCTitleSaveCheckConnect* TitleSaveCheckConnectWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TitleSubStoryWidgetPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCTitleSubStory* TitleSubStoryWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TitleSubStoryChapter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TitleSubStorySceneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubStorySelectIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TitleMenuWidgetPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCTitleMenu* TitleMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NzResultWidgetPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzResult* NzResultWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TutorialWindowPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TutorialWindowPath;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiTutorialWindow* TutorialWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GalleryWidgetPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GalleryWidgetPath;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCTitleGalleryBase* GalleryWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LicenseWidgetPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LicenseWidgetPath;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCTitleLicense* LicenseWidget;
    
public:
    ARCTitleHUD(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Tutorial_StartTutorial(FName ID, bool isAnytimeClosable);
    
    UFUNCTION(BlueprintCallable)
    void Tutorial_RemoveTutorialWindow();
    
    UFUNCTION(BlueprintCallable)
    bool Tutorial_Load();
    
    UFUNCTION(BlueprintCallable)
    bool Tutorial_IsShowWindow();
    
    UFUNCTION(BlueprintCallable)
    bool Tutorial_IsFinished();
    
    UFUNCTION(BlueprintCallable)
    bool Tutorial_CreateWidget();
    
    UFUNCTION(BlueprintCallable)
    void Tutorial_CloseTutorial();
    
    UFUNCTION(BlueprintCallable)
    bool NzResultStart(const int32 InChapterNumber);
    
    UFUNCTION(BlueprintCallable)
    bool NzResultFinish();
    
    UFUNCTION()
    void ChunkInstallEvent(uint32 InChunkID, bool InSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckNzResultStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckNzResultFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckNzResultClose();
    
};

