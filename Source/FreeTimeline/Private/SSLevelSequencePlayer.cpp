#include "SSLevelSequencePlayer.h"

   USSLevelSequencePlayer::USSLevelSequencePlayer(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOverrideAttachParam = false;
    this->ExecuteActor = NULL;
    this->SelectedLevelSequence = NULL;
    this->DefaultDuration = 0.00f;
    this->PlayInfoIndex = 0;
    this->LoopCount = -1;
}

void USSLevelSequencePlayer::SetSequencerPlaySeqNextLabel(FName Label, FName NewNextLabel) {
}

void USSLevelSequencePlayer::OnFinishedForExternalParticle() {
}


