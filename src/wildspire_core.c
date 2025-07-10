#include "wildspire_core.h"

// =============================================================================
// == LIFE CYCLE ===============================================================
// =============================================================================

void wildspire__PreInitializeCoreSubsystem(void) {}

void wildspire__InitializeCoreSubsystem(void) {}

void wildspire__TerminateCoreSubsystem(void) {}

// =============================================================================
// == UPDATES ==================================================================
// =============================================================================

void wildspire__FixedUpdateCoreSubsystem([[maybe_unused]] double delta) {}

void wildspire__EarlyUpdateCoreSubsystem([[maybe_unused]] double delta) {}

void wildspire__UpdateCoreSubsystem([[maybe_unused]] double delta) {}

void wildspire__LateUpdateCoreSubsystem([[maybe_unused]] double delta) {}

// =============================================================================
// == EVENTS ===================================================================
// =============================================================================

void wildspire__HandleCoreSubsystemEvent(
    [[maybe_unused]] const wildspire__Event[static 1]) {}
