#include "wildspire_core_errors.h"

#include <stdlib.h>

// =============================================================================
// == QUERIES ==================================================================
// =============================================================================

bool wildspire__HasError(void) { return false; }

int wildspire__ExitCode(void) {
  return wildspire__HasError() ? EXIT_FAILURE : EXIT_SUCCESS;
}
