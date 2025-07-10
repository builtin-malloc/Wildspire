#include "wildspire_debug.h"

// =============================================================================
// == LIFE CYCLE ===============================================================
// =============================================================================

void wildspire__PreInitializeDebugSubsystem(void) {}

void wildspire__InitializeDebugSubsystem(void) {}

void wildspire__TerminateDebugSubsystem(void) {}

// =============================================================================
// == UPDATES ==================================================================
// =============================================================================

void wildspire__FixedUpdateDebugSubsystem([[maybe_unused]] double delta) {}

void wildspire__EarlyUpdateDebugSubsystem([[maybe_unused]] double delta) {}

void wildspire__UpdateDebugSubsystem([[maybe_unused]] double delta) {}

void wildspire__LateUpdateDebugSubsystem([[maybe_unused]] double delta) {}

// =============================================================================
// == EVENTS ===================================================================
// =============================================================================

void wildspire__HandleDebugSubsystemEvent(
    [[maybe_unused]] const wildspire__Event[static 1]) {}
