#ifndef WILDSPIRE_EVENTS_H
#define WILDSPIRE_EVENTS_H

#include "wildspire_events_types.h"

// =============================================================================
// == LIFE CYCLE ===============================================================
// =============================================================================

/// @brief
void wildspire__PreInitializeEventsSubsystem(void);
/// @brief
void wildspire__InitializeEventsSubsystem(void);
/// @brief
void wildspire__TerminateEventsSubsystem(void);

// =============================================================================
// == UPDATES ==================================================================
// =============================================================================

/// @brief
void wildspire__FixedUpdateEventsSubsystem(double delta);
/// @brief
void wildspire__EarlyUpdateEventsSubsystem(double delta);
/// @brief
void wildspire__UpdateEventsSubsystem(double delta);
/// @brief
void wildspire__LateUpdateEventsSubsystem(double delta);

// =============================================================================
// == EVENTS ===================================================================
// =============================================================================

/// @brief
void wildspire__HandleEventsSubsystemEvent(const wildspire__Event[static 1]);

#endif // WILDSPIRE_EVENTS_H
