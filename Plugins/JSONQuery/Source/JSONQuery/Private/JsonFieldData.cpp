#include "JsonFieldData.h"

UJsonFieldData::UJsonFieldData() {
}

FString UJsonFieldData::ToString() {
    return TEXT("");
}

UJsonFieldData* UJsonFieldData::SetStringArray(const FString& Key, const TArray<FString> Data) {
    return NULL;
}

UJsonFieldData* UJsonFieldData::SetString(const FString& Key, const FString& Value) {
    return NULL;
}

UJsonFieldData* UJsonFieldData::SetObjectArray(const FString& Key, const TArray<UJsonFieldData*> ArrayData) {
    return NULL;
}

UJsonFieldData* UJsonFieldData::SetObject(const FString& Key, const UJsonFieldData* objectData) {
    return NULL;
}

UJsonFieldData* UJsonFieldData::SetNullArray(const FString& Key, const int32& Length) {
    return NULL;
}

UJsonFieldData* UJsonFieldData::SetNull(const FString& Key) {
    return NULL;
}

UJsonFieldData* UJsonFieldData::SetIntArray(const FString& Key, const TArray<int32> Data) {
    return NULL;
}

UJsonFieldData* UJsonFieldData::SetInt(const FString& Key, const int32 Value) {
    return NULL;
}

UJsonFieldData* UJsonFieldData::SetFloatArray(const FString& Key, const TArray<float> Data) {
    return NULL;
}

UJsonFieldData* UJsonFieldData::SetFloat(const FString& Key, const float Value) {
    return NULL;
}

UJsonFieldData* UJsonFieldData::SetBoolean(const FString& Key, const bool Value) {
    return NULL;
}

UJsonFieldData* UJsonFieldData::SetBoolArray(const FString& Key, const TArray<bool> Data) {
    return NULL;
}

void UJsonFieldData::PostRequestWithFile(const FString& FilePath, const FString& URL) {
}

void UJsonFieldData::PostRequest(const FString& URL) {
}

bool UJsonFieldData::HasField(const FString& Key) {
    return false;
}

TArray<FString> UJsonFieldData::GetStringArray(const FString& Key, bool& Success) {
    return TArray<FString>();
}

FString UJsonFieldData::GetString(const FString& Key, bool& Success) const {
    return TEXT("");
}

UJsonFieldData* UJsonFieldData::GetRequest(const FString& URL) {
    return NULL;
}

TArray<FString> UJsonFieldData::GetObjectKeys() {
    return TArray<FString>();
}

TArray<UJsonFieldData*> UJsonFieldData::GetObjectArray(const FString& Key, bool& Success) {
    return TArray<UJsonFieldData*>();
}

UJsonFieldData* UJsonFieldData::GetObject(const FString& Key, bool& Success) {
    return NULL;
}

bool UJsonFieldData::GetIsNull(const FString& Key, bool& fieldExists) const {
    return false;
}

TArray<int32> UJsonFieldData::GetIntArray(const FString& Key, bool& Success) {
    return TArray<int32>();
}

int32 UJsonFieldData::GetInt(const FString& Key, bool& Success) const {
    return 0;
}

TArray<float> UJsonFieldData::GetFloatArray(const FString& Key, bool& Success) {
    return TArray<float>();
}

float UJsonFieldData::GetFloat(const FString& Key, bool& Success) const {
    return 0.0f;
}

TArray<bool> UJsonFieldData::GetBoolArray(const FString& Key, bool& Success) {
    return TArray<bool>();
}

bool UJsonFieldData::GetBool(const FString& Key, bool& Success) const {
    return false;
}

bool UJsonFieldData::FromString(const FString& dataString) {
    return false;
}

bool UJsonFieldData::FromFile(const FString& FilePath) {
    return false;
}

UJsonFieldData* UJsonFieldData::Create() {
    return NULL;
}


