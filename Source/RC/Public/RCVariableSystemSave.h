#pragma once
#include "CoreMinimal.h"
#include "ERCChapter.h"
#include "RCAchievementSaveInfo.h"
#include "RCVariableFigureAllInfo.h"
#include "RCVariableGameMenuCollectionMenuInfo.h"
#include "RCVariableGameMenuGalleryBgmMenuInfo.h"
#include "RCVariableGameMenuGalleryMenuInfo.h"
#include "RCVariableGameMenuGalleryMovieMenuInfo.h"
#include "RCVariableGameMenuGlossaryMenuInfo.h"
#include "RCVariableNazoBattleInfo.h"
#include "RCVariableNazoResultList.h"
#include "RCVariableTanteiSystemInfo.h"
#include "RCVariableSystemSave.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCVariableSystemSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGameClear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERCChapter> ClearChapterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableTanteiSystemInfo TanteiSystemInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableFigureAllInfo FigureAllInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableGameMenuCollectionMenuInfo CollectionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableGameMenuGlossaryMenuInfo GlossaryMenuList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableNazoBattleInfo BattleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCVariableNazoResultList> ResultInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> UlockAchievementList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCAchievementSaveInfo> UlockAchievementSaveList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableGameMenuGalleryMenuInfo GalleryInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableGameMenuGalleryBgmMenuInfo GalleryBgmInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCVariableGameMenuGalleryMovieMenuInfo GalleryMovieInfo;
    
    FRCVariableSystemSave();
};

