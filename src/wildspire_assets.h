#ifndef WILDSPIRE_ASSETS_H
#define WILDSPIRE_ASSETS_H

#include "wildspire_events_types.h"

// =============================================================================
// == LIFE CYCLE ===============================================================
// =============================================================================

/// @brief
void wildspire__PreInitializeAssetsSubsystem(void);
/// @brief
void wildspire__InitializeAssetsSubsystem(void);
/// @brief
void wildspire__TerminateAssetsSubsystem(void);

// =============================================================================
// == UPDATES ==================================================================
// =============================================================================

/// @brief
void wildspire__FixedUpdateAssetsSubsystem(double delta);
/// @brief
void wildspire__EarlyUpdateAssetsSubsystem(double delta);
/// @brief
void wildspire__UpdateAssetsSubsystem(double delta);
/// @brief
void wildspire__LateUpdateAssetsSubsystem(double delta);

// =============================================================================
// == EVENTS ===================================================================
// =============================================================================

/// @brief
void wildspire__HandleAssetsSubsystemEvent(const wildspire__Event[static 1]);

#endif // WILDSPIRE_ASSETS_H
