#ifndef WILDSPIRE_DEBUG_H
#define WILDSPIRE_DEBUG_H

#include "wildspire_events_types.h"

// =============================================================================
// == LIFE CYCLE ===============================================================
// =============================================================================

/// @brief
void wildspire__PreInitializeDebugSubsystem(void);
/// @brief
void wildspire__InitializeDebugSubsystem(void);
/// @brief
void wildspire__TerminateDebugSubsystem(void);

// =============================================================================
// == UPDATES ==================================================================
// =============================================================================

/// @brief
void wildspire__FixedUpdateDebugSubsystem(double delta);
/// @brief
void wildspire__EarlyUpdateDebugSubsystem(double delta);
/// @brief
void wildspire__UpdateDebugSubsystem(double delta);
/// @brief
void wildspire__LateUpdateDebugSubsystem(double delta);

// =============================================================================
// == EVENTS ===================================================================
// =============================================================================

/// @brief
void wildspire__HandleDebugSubsystemEvent(const wildspire__Event[static 1]);

#endif // WILDSPIRE_DEBUG_H
