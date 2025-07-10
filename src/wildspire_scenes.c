#include "wildspire_scenes.h"

// =============================================================================
// == LIFE CYCLE ===============================================================
// =============================================================================

void wildspire__PreInitializeSceneSubsystem(void) {}

void wildspire__InitializeSceneSubsystem(void) {}

void wildspire__TerminateSceneSubsystem(void) {}

// =============================================================================
// == UPDATES ==================================================================
// =============================================================================

void wildspire__FixedUpdateSceneSubsystem([[maybe_unused]] double delta) {}

void wildspire__EarlyUpdateSceneSubsystem([[maybe_unused]] double delta) {}

void wildspire__UpdateSceneSubsystem([[maybe_unused]] double delta) {}

void wildspire__LateUpdateSceneSubsystem([[maybe_unused]] double delta) {}

// =============================================================================
// == EVENTS ===================================================================
// =============================================================================

void wildspire__HandleSceneSubsystemEvent(
    [[maybe_unused]] const wildspire__Event[static 1]) {}

// =============================================================================
// == API ======================================================================
// =============================================================================

wildspire__SceneID wildspire__CurrentScene(void) { return wildspire__NO_SCENE; }
