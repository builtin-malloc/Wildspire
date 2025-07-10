#include "wildspire_entities.h"

// =============================================================================
// == LIFE CYCLE ===============================================================
// =============================================================================

void wildspire__PreInitializeEntitiesSubsystem(void) {}

void wildspire__InitializeEntitiesSubsystem(void) {}

void wildspire__TerminateEntitiesSubsystem(void) {}

// =============================================================================
// == UPDATES ==================================================================
// =============================================================================

void wildspire__FixedUpdateEntitiesSubsystem([[maybe_unused]] double delta) {}

void wildspire__EarlyUpdateEntitiesSubsystem([[maybe_unused]] double delta) {}

void wildspire__UpdateEntitiesSubsystem([[maybe_unused]] double delta) {}

void wildspire__LateUpdateEntitiesSubsystem([[maybe_unused]] double delta) {}

// =============================================================================
// == EVENTS ===================================================================
// =============================================================================

void wildspire__HandleEntitiesSubsystemEvent(
    [[maybe_unused]] const wildspire__Event[static 1]) {}
