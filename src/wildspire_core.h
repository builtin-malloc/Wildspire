#ifndef WILDSPIRE_CORE_H
#define WILDSPIRE_CORE_H

#include "wildspire_events_types.h"

// =============================================================================
// == LIFE CYCLE ===============================================================
// =============================================================================

/// @brief
void wildspire__PreInitializeCoreSubsystem(void);
/// @brief
void wildspire__InitializeCoreSubsystem(void);
/// @brief
void wildspire__TerminateCoreSubsystem(void);

// =============================================================================
// == UPDATES ==================================================================
// =============================================================================

/// @brief
void wildspire__FixedUpdateCoreSubsystem(double delta);
/// @brief
void wildspire__EarlyUpdateCoreSubsystem(double delta);
/// @brief
void wildspire__UpdateCoreSubsystem(double delta);
/// @brief
void wildspire__LateUpdateCoreSubsystem(double delta);

// =============================================================================
// == EVENTS ===================================================================
// =============================================================================

/// @brief
void wildspire__HandleCoreSubsystemEvent(const wildspire__Event[static 1]);

#endif // WILDSPIRE_CORE_H
