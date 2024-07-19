#include "RCDataConversionBP.h"

URCDataConversionBP::URCDataConversionBP(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FName URCDataConversionBP::TestPrint() {
    return NAME_None;
}

FString URCDataConversionBP::GetUTF8(const FString& in_ansi_string) {
    return TEXT("");
}


