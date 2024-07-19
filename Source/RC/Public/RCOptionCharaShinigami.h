#pragma once
#include "CoreMinimal.h"
#include "RCOptionChara.h"
#include "RCOptionCharaShinigami.generated.h"

UCLASS(Blueprintable)
class RC_API ARCOptionCharaShinigami : public ARCOptionChara {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 sWarpRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 sYumacapcelRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 sYumaRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 sYumaThinkRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 sYumaMaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float sfNiunireTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float sfThinkTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float sAddsped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_run_shikii;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float tiltrot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float tiltime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Waitme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAI;
    
public:
    ARCOptionCharaShinigami(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUseAI(bool bFlag);
    
private:
    UFUNCTION(BlueprintCallable)
    void RemoveSsite();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsUseAI();
    
private:
    UFUNCTION(BlueprintCallable)
    int32 GetShinigamiTilt();
    
    UFUNCTION(BlueprintCallable)
    int32 GetShinigamiStat();
    
    UFUNCTION(BlueprintCallable)
    float GetShinigamiSpeed();
    
    UFUNCTION(BlueprintCallable)
    float GetShinigamiFrame();
    
};

