#pragma once
#include "CoreMinimal.h"
#include "ERCAdvHUDWidgetState.h"
#include "ESCBaloonFrame.h"
#include "ESCBaloonType.h"
#include "RCAdvHUDAccessableCharacterData.h"
#include "RCAdvHUDAccessableWidgetBaseData.h"
#include "RCAdvHUDBalloonWidgetSet.h"
#include "RCAdvHUDBalloonData.generated.h"

USTRUCT(BlueprintType)
struct FRCAdvHUDBalloonData : public FRCAdvHUDAccessableWidgetBaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAdvHUDAccessableCharacterData CharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAdvHUDBalloonWidgetSet WidgetSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCBaloonFrame BalloonFrameType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCBaloonType BalloonContentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBalloonDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTextDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFarInViewport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetState State3D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStateLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale3D;
    
    RC_API FRCAdvHUDBalloonData();
};

