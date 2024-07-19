#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnGetResultDelegate.h"
#include "JsonFieldData.generated.h"

class UJsonFieldData;

UCLASS(Blueprintable)
class JSONQUERY_API UJsonFieldData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetResult OnGetResult;
    
    UJsonFieldData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ToString();
    
    UFUNCTION(BlueprintCallable)
    UJsonFieldData* SetStringArray(const FString& Key, const TArray<FString> Data);
    
    UFUNCTION(BlueprintCallable)
    UJsonFieldData* SetString(const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    UJsonFieldData* SetObjectArray(const FString& Key, const TArray<UJsonFieldData*> ArrayData);
    
    UFUNCTION(BlueprintCallable)
    UJsonFieldData* SetObject(const FString& Key, const UJsonFieldData* objectData);
    
    UFUNCTION(BlueprintCallable)
    UJsonFieldData* SetNullArray(const FString& Key, const int32& Length);
    
    UFUNCTION(BlueprintCallable)
    UJsonFieldData* SetNull(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    UJsonFieldData* SetIntArray(const FString& Key, const TArray<int32> Data);
    
    UFUNCTION(BlueprintCallable)
    UJsonFieldData* SetInt(const FString& Key, const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    UJsonFieldData* SetFloatArray(const FString& Key, const TArray<float> Data);
    
    UFUNCTION(BlueprintCallable)
    UJsonFieldData* SetFloat(const FString& Key, const float Value);
    
    UFUNCTION(BlueprintCallable)
    UJsonFieldData* SetBoolean(const FString& Key, const bool Value);
    
    UFUNCTION(BlueprintCallable)
    UJsonFieldData* SetBoolArray(const FString& Key, const TArray<bool> Data);
    
    UFUNCTION(BlueprintCallable)
    void PostRequestWithFile(const FString& FilePath, const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    void PostRequest(const FString& URL);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasField(const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetStringArray(const FString& Key, bool& Success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetString(const FString& Key, bool& Success) const;
    
    UFUNCTION(BlueprintCallable)
    static UJsonFieldData* GetRequest(const FString& URL);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetObjectKeys();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UJsonFieldData*> GetObjectArray(const FString& Key, bool& Success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UJsonFieldData* GetObject(const FString& Key, bool& Success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsNull(const FString& Key, bool& fieldExists) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetIntArray(const FString& Key, bool& Success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInt(const FString& Key, bool& Success) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<float> GetFloatArray(const FString& Key, bool& Success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFloat(const FString& Key, bool& Success) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<bool> GetBoolArray(const FString& Key, bool& Success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBool(const FString& Key, bool& Success) const;
    
    UFUNCTION(BlueprintCallable)
    bool FromString(const FString& dataString);
    
    UFUNCTION(BlueprintCallable)
    bool FromFile(const FString& FilePath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UJsonFieldData* Create();
    
};

