#ifndef GAME_MAIN_SCREEN_H
#define GAME_MAIN_SCREEN_H

#include "wildspire_events_types.h"

// =============================================================================
// == LIFE CYCLE ===============================================================
// =============================================================================

/// @brief
void game__PreInitializeMainScreen(void);
/// @brief
void game__InitializeMainScreen(void);
/// @brief
void game__TerminateMainScreen(void);

// =============================================================================
// == UPDATES ==================================================================
// =============================================================================

/// @brief
void game__FixedUpdateMainScreen(double delta);
/// @brief
void game__UpdateMainScreen(double delta);
/// @brief
void game__RenderMainScreen(double delta);

// =============================================================================
// == EVENTS ===================================================================
// =============================================================================

/// @brief
void game__HandleMainScreenEvent(const wildspire__Event[static 1]);

#endif // GAME_MAIN_SCREEN_H
