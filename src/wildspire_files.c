#include "wildspire_files.h"

// =============================================================================
// == LIFE CYCLE ===============================================================
// =============================================================================

void wildspire__PreInitializeFileSubsystem(void) {}

void wildspire__InitializeFileSubsystem(void) {}

void wildspire__TerminateFileSubsystem(void) {}

// =============================================================================
// == UPDATES ==================================================================
// =============================================================================

void wildspire__FixedUpdateFileSubsystem([[maybe_unused]] double delta) {}

void wildspire__EarlyUpdateFileSubsystem([[maybe_unused]] double delta) {}

void wildspire__UpdateFileSubsystem([[maybe_unused]] double delta) {}

void wildspire__LateUpdateFileSubsystem([[maybe_unused]] double delta) {}

// =============================================================================
// == EVENTS ===================================================================
// =============================================================================

void wildspire__HandleFileSubsystemEvent(
    [[maybe_unused]] const wildspire__Event[static 1]) {}
