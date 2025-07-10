#include "wildspire_events.h"

// =============================================================================
// == LIFE CYCLE ===============================================================
// =============================================================================

void wildspire__PreInitializeEventsSubsystem(void) {}

void wildspire__InitializeEventsSubsystem(void) {}

void wildspire__TerminateEventsSubsystem(void) {}

// =============================================================================
// == UPDATES ==================================================================
// =============================================================================

void wildspire__FixedUpdateEventsSubsystem([[maybe_unused]] double delta) {}

void wildspire__EarlyUpdateEventsSubsystem([[maybe_unused]] double delta) {}

void wildspire__UpdateEventsSubsystem([[maybe_unused]] double delta) {}

void wildspire__LateUpdateEventsSubsystem([[maybe_unused]] double delta) {}

// =============================================================================
// == EVENTS ===================================================================
// =============================================================================

void wildspire__HandleEventsSubsystemEvent(
    [[maybe_unused]] const wildspire__Event[static 1]) {}
