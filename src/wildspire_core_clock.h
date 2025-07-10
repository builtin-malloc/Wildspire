#ifndef WILDSPIRE_CORE_CLOCK_H
#define WILDSPIRE_CORE_CLOCK_H

// =============================================================================
// == API ======================================================================
// =============================================================================

/// @returns The delta time for non-fixed updates
double wildspire__Delta(void);
/// @returns The delta time for fixed updates
double wildspire__FixedDelta(void);

/// @returns True while the fixed updates need to be run
bool wildspire__ShouldRunFixedUpdate(void);

#endif // WILDSPIRE_CORE_CLOCK_H
