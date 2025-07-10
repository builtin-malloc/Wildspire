#ifndef WILDSPIRE_SCENES_H
#define WILDSPIRE_SCENES_H

#include "wildspire_events_types.h"
#include "wildspire_scenes_types.h"

// =============================================================================
// == LIFE CYCLE ===============================================================
// =============================================================================

/// @brief
void wildspire__PreInitializeSceneSubsystem(void);
/// @brief
void wildspire__InitializeSceneSubsystem(void);
/// @brief
void wildspire__TerminateSceneSubsystem(void);

// =============================================================================
// == UPDATES ==================================================================
// =============================================================================

/// @brief
void wildspire__FixedUpdateSceneSubsystem(double delta);
/// @brief
void wildspire__EarlyUpdateSceneSubsystem(double delta);
/// @brief
void wildspire__UpdateSceneSubsystem(double delta);
/// @brief
void wildspire__LateUpdateSceneSubsystem(double delta);

// =============================================================================
// == EVENTS ===================================================================
// =============================================================================

/// @brief
void wildspire__HandleSceneSubsystemEvent(const wildspire__Event[static 1]);

// =============================================================================
// == API ======================================================================
// =============================================================================

/// @returns the current scene
wildspire__SceneID wildspire__CurrentScene(void);

#endif // WILDSPIRE_SCENES_H
