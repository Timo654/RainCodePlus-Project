#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "ECollectionState.h"
#include "EDialigType.h"
#include "RCMenuManager.h"
#include "RCMenuCollection.generated.h"

class URCMenuCollectionFace;
class URCMenuCollectionFigure;
class URCMenuCollectionHint;
class URCMenuCollectionList;
class URCUiMenuCommonTab;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCMenuCollection : public URCMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCMenuCollectionFace* Menu_Collect_Face;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCMenuCollectionList* Menu_Collect_List;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCMenuCollectionHint* Menu_Collect_Hint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCMenuCollectionFigure* Menu_Collect_Figure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCUiMenuCommonTab* Menu_Com_Tab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ECollectionState CurrentState;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDialigType dialogType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 selectCharaIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> charaIDArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 selectStoryIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bListLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isComebackStoryScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isUseGenericWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isJumpCollection;
    
public:
    URCMenuCollection();

    UFUNCTION(BlueprintCallable)
    void PushDecide();
    
    UFUNCTION(BlueprintCallable)
    void PagePrev();
    
    UFUNCTION(BlueprintCallable)
    void PageNext();
    
    UFUNCTION(BlueprintCallable)
    void PageJump(int32 InPageIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    UWidget* CollectionSelectNavigation(EUINavigation InNavigation);
    
};

