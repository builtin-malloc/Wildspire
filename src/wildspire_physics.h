#ifndef WILDSPIRE_PHYSICS_H
#define WILDSPIRE_PHYSICS_H

#include "wildspire_events_types.h"

// =============================================================================
// == LIFE CYCLE ===============================================================
// =============================================================================

/// @brief
void wildspire__PreInitializePhysicsSubsystem(void);
/// @brief
void wildspire__InitializePhysicsSubsystem(void);
/// @brief
void wildspire__TerminatePhysicsSubsystem(void);

// =============================================================================
// == UPDATES ==================================================================
// =============================================================================

/// @brief
void wildspire__FixedUpdatePhysicsSubsystem(double delta);
/// @brief
void wildspire__EarlyUpdatePhysicsSubsystem(double delta);
/// @brief
void wildspire__UpdatePhysicsSubsystem(double delta);
/// @brief
void wildspire__LateUpdatePhysicsSubsystem(double delta);

// =============================================================================
// == EVENTS ===================================================================
// =============================================================================

/// @brief
void wildspire__HandlePhysicsSubsystemEvent(const wildspire__Event[static 1]);

#endif // WILDSPIRE_PHYSICS_H
