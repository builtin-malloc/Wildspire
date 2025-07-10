#include "wildspire_physics.h"

// =============================================================================
// == LIFE CYCLE ===============================================================
// =============================================================================

void wildspire__PreInitializePhysicsSubsystem(void) {}

void wildspire__InitializePhysicsSubsystem(void) {}

void wildspire__TerminatePhysicsSubsystem(void) {}

// =============================================================================
// == UPDATES ==================================================================
// =============================================================================

void wildspire__FixedUpdatePhysicsSubsystem([[maybe_unused]] double delta) {}

void wildspire__EarlyUpdatePhysicsSubsystem([[maybe_unused]] double delta) {}

void wildspire__UpdatePhysicsSubsystem([[maybe_unused]] double delta) {}

void wildspire__LateUpdatePhysicsSubsystem([[maybe_unused]] double delta) {}

// =============================================================================
// == EVENTS ===================================================================
// =============================================================================

void wildspire__HandlePhysicsSubsystemEvent(
    [[maybe_unused]] const wildspire__Event[static 1]) {}
