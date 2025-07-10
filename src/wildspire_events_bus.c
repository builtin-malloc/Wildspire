#include "wildspire_events_bus.h"

// =============================================================================
// == API ======================================================================
// =============================================================================

bool wildspire__HasSeenQuitEvent(void) { return true; }

bool wildspire__PollEvent([[maybe_unused]] wildspire__Event event[static 1]) {
  return false;
}
