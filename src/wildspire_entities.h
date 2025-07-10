#ifndef WILDSPIRE_ENTITIES_H
#define WILDSPIRE_ENTITIES_H

#include "wildspire_events_types.h"

// =============================================================================
// == LIFE CYCLE ===============================================================
// =============================================================================

/// @brief
void wildspire__PreInitializeEntitiesSubsystem(void);
/// @brief
void wildspire__InitializeEntitiesSubsystem(void);
/// @brief
void wildspire__TerminateEntitiesSubsystem(void);

// =============================================================================
// == UPDATES ==================================================================
// =============================================================================

/// @brief
void wildspire__FixedUpdateEntitiesSubsystem(double delta);
/// @brief
void wildspire__EarlyUpdateEntitiesSubsystem(double delta);
/// @brief
void wildspire__UpdateEntitiesSubsystem(double delta);
/// @brief
void wildspire__LateUpdateEntitiesSubsystem(double delta);

// =============================================================================
// == EVENTS ===================================================================
// =============================================================================

/// @brief
void wildspire__HandleEntitiesSubsystemEvent(const wildspire__Event[static 1]);

#endif // WILDSPIRE_ENTITIES_H
