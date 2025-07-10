#ifndef WILDSPIRE_EVENTS_TYPES_H
#define WILDSPIRE_EVENTS_TYPES_H

#include <stdint.h>

// =============================================================================
// == TYPES ====================================================================
// =============================================================================

/// @brief
typedef uint64_t wildspire__EventTypeID;

/// @brief
typedef union _wildspire__Event {
  wildspire__EventTypeID type;
} wildspire__Event;

#endif // WILDSPIRE_EVENTS_TYPES_H
