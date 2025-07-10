#ifndef WILDSPIRE_EVENTS_BUS_H
#define WILDSPIRE_EVENTS_BUS_H

#include "wildspire_events_types.h"

// =============================================================================
// == API ======================================================================
// =============================================================================

/// @returns True if the quit event has been seen
bool wildspire__HasSeenQuitEvent(void);

/// @brief
bool wildspire__PollEvent(wildspire__Event event[static 1]);

#endif // WILDSPIRE_EVENTS_BUS_H
