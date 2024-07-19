#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCBgBFL.generated.h"

UCLASS(Blueprintable)
class RC_API URCBgBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCBgBFL();

    UFUNCTION(BlueprintCallable)
    static bool StartUnLoadSubLevelList(bool bLoadingDraw, bool bPlayerMove);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadAllEventSetting(int32 InChapterNum, FName InSceneNum, FName InMapID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSyncSubLevel();
    
    UFUNCTION(BlueprintCallable)
    static bool IsMapIDEquale(FName InMapID1, FName InMapID2);
    
};

