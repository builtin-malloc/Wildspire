#ifndef WILDSPIRE_CORE_ERRORS_H
#define WILDSPIRE_CORE_ERRORS_H

// =============================================================================
// == QUERIES ==================================================================
// =============================================================================

/// @returns true if any error has been reported
bool wildspire__HasError(void);
/// @returns EXIT_SUCCESS if not error has been reported
int  wildspire__ExitCode(void);

#endif // WILDSPIRE_CORE_ERRORS_H
