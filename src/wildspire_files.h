#ifndef WILDSPIRE_FILES_H
#define WILDSPIRE_FILES_H

#include "wildspire_events_types.h"

// =============================================================================
// == LIFE CYCLE ===============================================================
// =============================================================================

/// @brief
void wildspire__PreInitializeFileSubsystem(void);
/// @brief
void wildspire__InitializeFileSubsystem(void);
/// @brief
void wildspire__TerminateFileSubsystem(void);

// =============================================================================
// == UPDATES ==================================================================
// =============================================================================

/// @brief
void wildspire__FixedUpdateFileSubsystem(double delta);
/// @brief
void wildspire__EarlyUpdateFileSubsystem(double delta);
/// @brief
void wildspire__UpdateFileSubsystem(double delta);
/// @brief
void wildspire__LateUpdateFileSubsystem(double delta);

// =============================================================================
// == EVENTS ===================================================================
// =============================================================================

/// @brief
void wildspire__HandleFileSubsystemEvent(const wildspire__Event[static 1]);

#endif // WILDSPIRE_FILES_H
