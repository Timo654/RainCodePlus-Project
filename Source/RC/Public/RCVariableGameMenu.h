#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCVariableGameMenu.generated.h"

class URCVariableGameMenuCharacter;
class URCVariableGameMenuCollection;
class URCVariableGameMenuGlossary;
class URCVariableGameMenuKaikagi;
class URCVariableGameMenuMap;
class URCVariableGameMenuPersona;
class URCVariableGameMenuQuest;
class URCVariableGameMenuTop;

UCLASS(Blueprintable)
class RC_API URCVariableGameMenu : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCVariableGameMenuTop* Top;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCVariableGameMenuMap* Map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCVariableGameMenuKaikagi* kaikagi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCVariableGameMenuQuest* Quest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCVariableGameMenuPersona* Persona;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCVariableGameMenuCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCVariableGameMenuGlossary* Glossary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCVariableGameMenuCollection* Collection;
    
public:
    URCVariableGameMenu();

};

