#include "RCTitleHUD.h"

ARCTitleHUD::ARCTitleHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->GenericWindowPriority = 50000;
    this->GenericWindowWidget = NULL;
    this->CollectionMenuWidgetPriority = 30060;
    this->CollectionMenuWidget = NULL;
    this->CollectionWindowWidgetPriority = 49000;
    this->CollectionWindowWidget = NULL;
    this->TitleLogoWidgetPriority = 30700;
    this->TitleLogoWidget = NULL;
    this->TitleLangaugeWidgetPriority = 30700;
    this->TitleLanguageWidget = NULL;
    this->TitleChapterSelectWidgetPriority = 30700;
    this->TitleChapterSelectWidget = NULL;
    this->ChapterSelectChapterNum = -1;
    this->TitleSaveCheckWidgetPriority = 30700;
    this->TitleSaveCheckWidget = NULL;
    this->TitleSaveCheckConnectWidgetPriority = 30700;
    this->TitleSaveCheckConnectWidget = NULL;
    this->TitleSubStoryWidgetPriority = 30700;
    this->TitleSubStoryWidget = NULL;
    this->TitleSubStoryChapter = -1;
    this->SubStorySelectIndex = -1;
    this->TitleMenuWidgetPriority = 30700;
    this->TitleMenuWidget = NULL;
    this->NzResultWidgetPriority = 30070;
    this->NzResultWidget = NULL;
    this->TutorialWindowPriority = 32000;
    this->TutorialWindowPath = TEXT("/Game/RC/UI/Tutorial/WBP_Tutorial.WBP_Tutorial_C");
    this->TutorialWindow = NULL;
    this->GalleryWidgetPriority = 30700;
    this->GalleryWidget = NULL;
    this->LicenseWidgetPriority = 30700;
    this->LicenseWidget = NULL;
}

void ARCTitleHUD::Tutorial_StartTutorial(FName ID, bool isAnytimeClosable) {
}

void ARCTitleHUD::Tutorial_RemoveTutorialWindow() {
}

bool ARCTitleHUD::Tutorial_Load() {
    return false;
}

bool ARCTitleHUD::Tutorial_IsShowWindow() {
    return false;
}

bool ARCTitleHUD::Tutorial_IsFinished() {
    return false;
}

bool ARCTitleHUD::Tutorial_CreateWidget() {
    return false;
}

void ARCTitleHUD::Tutorial_CloseTutorial() {
}

bool ARCTitleHUD::NzResultStart(const int32 InChapterNumber) {
    return false;
}

bool ARCTitleHUD::NzResultFinish() {
    return false;
}

void ARCTitleHUD::ChunkInstallEvent(uint32 InChunkID, bool InSuccess) {
}

bool ARCTitleHUD::CheckNzResultStarted() {
    return false;
}

bool ARCTitleHUD::CheckNzResultFinished() {
    return false;
}

bool ARCTitleHUD::CheckNzResultClose() {
    return false;
}


