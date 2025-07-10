#ifndef WILDSPIRE_UI_H
#define WILDSPIRE_UI_H

#include "wildspire_events_types.h"

// =============================================================================
// == LIFE CYCLE ===============================================================
// =============================================================================

/// @brief
void wildspire__PreInitializeUiSubsystem(void);
/// @brief
void wildspire__InitializeUiSubsystem(void);
/// @brief
void wildspire__TerminateUiSubsystem(void);

// =============================================================================
// == UPDATES ==================================================================
// =============================================================================

/// @brief
void wildspire__FixedUpdateUiSubsystem(double delta);
/// @brief
void wildspire__EarlyUpdateUiSubsystem(double delta);
/// @brief
void wildspire__UpdateUiSubsystem(double delta);
/// @brief
void wildspire__LateUpdateUiSubsystem(double delta);

// =============================================================================
// == EVENTS ===================================================================
// =============================================================================

/// @brief
void wildspire__HandleUiSubsystemEvent(const wildspire__Event[static 1]);

#endif // WILDSPIRE_UI_H
