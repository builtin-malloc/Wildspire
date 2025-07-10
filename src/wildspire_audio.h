#ifndef WILDSPIRE_AUDIO_H
#define WILDSPIRE_AUDIO_H

#include "wildspire_events_types.h"

// =============================================================================
// == LIFE CYCLE ===============================================================
// =============================================================================

/// @brief
void wildspire__PreInitializeAudioSubsystem(void);
/// @brief
void wildspire__InitializeAudioSubsystem(void);
/// @brief
void wildspire__TerminateAudioSubsystem(void);

// =============================================================================
// == UPDATES ==================================================================
// =============================================================================

/// @brief
void wildspire__FixedUpdateAudioSubsystem(double delta);
/// @brief
void wildspire__EarlyUpdateAudioSubsystem(double delta);
/// @brief
void wildspire__UpdateAudioSubsystem(double delta);
/// @brief
void wildspire__LateUpdateAudioSubsystem(double delta);

// =============================================================================
// == EVENTS ===================================================================
// =============================================================================

/// @brief
void wildspire__HandleAudioSubsystemEvent(const wildspire__Event[static 1]);

#endif // WILDSPIRE_AUDIO_H
