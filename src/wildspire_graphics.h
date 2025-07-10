#ifndef WILDSPIRE_GRAPHICS_H
#define WILDSPIRE_GRAPHICS_H

#include "wildspire_events_types.h"

// =============================================================================
// == LIFE CYCLE ===============================================================
// =============================================================================

/// @brief
void wildspire__PreInitializeGraphicsSubsystem(void);
/// @brief
void wildspire__InitializeGraphicsSubsystem(void);
/// @brief
void wildspire__TerminateGraphicsSubsystem(void);

// =============================================================================
// == UPDATES ==================================================================
// =============================================================================

/// @brief
void wildspire__FixedUpdateGraphicsSubsystem(double delta);
/// @brief
void wildspire__EarlyUpdateGraphicsSubsystem(double delta);
/// @brief
void wildspire__UpdateGraphicsSubsystem(double delta);
/// @brief
void wildspire__LateUpdateGraphicsSubsystem(double delta);

// =============================================================================
// == EVENTS ===================================================================
// =============================================================================

/// @brief
void wildspire__HandleGraphicsSubsystemEvent(const wildspire__Event[static 1]);

#endif // WILDSPIRE_GRAPHICS_H
