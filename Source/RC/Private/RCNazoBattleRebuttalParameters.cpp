#include "RCNazoBattleRebuttalParameters.h"

FRCNazoBattleRebuttalParameters::FRCNazoBattleRebuttalParameters() {
    this->bEnable = false;
    this->IntervalTime = 0.00f;
    this->KaijinPositionID = 0;
    this->KaijinMoveTimeRate = 0.00f;
    this->KaijinLandingTime = 0.00f;
    this->KaijinAfterPositionID = 0;
    this->bKaijinCutinEvent = false;
    this->KaijinAttackReadyMotionDelayTime = 0.00f;
    this->KaijinAttackMotionPlayRate = 0.00f;
    this->KaijinAttackMotionBlendTime = 0.00f;
    this->bKaijinAttackSocket = false;
    this->OtherKaijinMoveDelayTime = 0.00f;
    this->OtherKaijinMovePositionIndex = 0;
    this->OtherKaijinMotionDelayTime = 0.00f;
    this->OtherKaijinMotionPlayRate = 0.00f;
    this->OtherKaijinMotionBlendTime = 0.00f;
    this->LetterTextFaceID = 0;
    this->bLetterAddBackLog = false;
    this->LetterAspect = ERCNazoBattleRebuttalLetterAspect::W1H1;
    this->LetterSize = ERCNazoBattleRebuttalLetterSize::VerySmall;
    this->LetterType = ERCNazoBattleRebuttalLetterType::Normal;
    this->bLetterDecorationFlag = false;
    this->bLetterSkillEffect = false;
    this->LetterContinueCountBecomeNormal = 0;
    this->LetterDamage = 0;
    this->BuriedLetterShadowAlphaRate = 0.00f;
    this->LetterAppearDelayTime = 0.00f;
    this->LetterPosition = ERCNazoBattleRebuttalLetterPosition::Top;
    this->LetterMiddleLRType = ERCNazoBattleRebuttalLetterMiddleLRType::Default;
    this->bLetterAppearEffect = false;
    this->LetterStayTime = 0.00f;
    this->LetterLaunchDelayTime = 0.00f;
    this->LetterMoveTime = 0.00f;
    this->LetterMoveMaxSpeed = 0.00f;
    this->LetterMoveAcceleration = 0.00f;
    this->bJustAvoidDirectionCustomL = false;
    this->bJustAvoidDirectionCustomR = false;
    this->bLetterRollingStart = false;
    this->LetterRollingStartTime = 0.00f;
    this->LetterRollingStartCount = 0;
    this->bLetterRollingStartLeft = false;
}

