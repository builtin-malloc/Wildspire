#include "wildspire_audio.h"

// =============================================================================
// == LIFE CYCLE ===============================================================
// =============================================================================

void wildspire__PreInitializeAudioSubsystem(void) {}

void wildspire__InitializeAudioSubsystem(void) {}

void wildspire__TerminateAudioSubsystem(void) {}

// =============================================================================
// == UPDATES ==================================================================
// =============================================================================

void wildspire__FixedUpdateAudioSubsystem([[maybe_unused]] double delta) {}

void wildspire__EarlyUpdateAudioSubsystem([[maybe_unused]] double delta) {}

void wildspire__UpdateAudioSubsystem([[maybe_unused]] double delta) {}

void wildspire__LateUpdateAudioSubsystem([[maybe_unused]] double delta) {}

// =============================================================================
// == EVENTS ===================================================================
// =============================================================================

void wildspire__HandleAudioSubsystemEvent(
    [[maybe_unused]] const wildspire__Event[static 1]) {}
