#include "RCVariableManager.h"

URCVariableManager::URCVariableManager() {
    this->GameMode = ERCGameMode::Non;
    this->NextGameMode = ERCGameMode::Non;
    this->StoryMode = ERCStoryMode::Original;
    this->GameVariable.AddDefaulted(100);
    this->ChapterVariable.AddDefaulted(1000);
    this->SceneVariable.AddDefaulted(1000);
    this->bIsGameClear = false;
    this->MainQuestPhase = 0;
    this->BusStopStatus = ERCRealEventMapConnectStatus::Enable;
    this->bIsMoveBusStop = false;
    this->bIsTitleCollectionEvent = false;
    this->bIsCollectionEvent = false;
    this->bIsCollectionEventBack = false;
    this->CollectionMenuStoryChapterNum = 0;
    this->CollectionMenuSelectStoryIndex = 0;
    this->bMessageAuto = false;
    this->bSkipEnable = true;
    this->bFreeMoveSkipEnable = false;
    this->bMovieSkipEnable = true;
    this->bExecMenuSceneLoad = false;
    this->bDrawDisableSubQuest = false;
    this->bIsGalleryMode = false;
    this->bOpenGalleryMode = false;
    this->GalleryMenuMovieSoundTable = NULL;
    this->GalleryMenuMovieListIndex = 0;
    this->bTitleInitFrontList = true;
    this->TitleFrontListIndex = 0;
    this->TitleBackListIndex = 0;
    this->IsEnableSaveData = false;
    this->IsEnableSaveDataSubStory = false;
    this->bDataLoadReturn = false;
    this->bStartDebugMenuDraw = false;
    this->bSaveEnable = false;
}


