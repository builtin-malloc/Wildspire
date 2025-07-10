#ifndef GAME_MENU_SCREEN_H
#define GAME_MENU_SCREEN_H

#include "wildspire_events_types.h"

// =============================================================================
// == LIFE CYCLE ===============================================================
// =============================================================================

/// @brief
void game__PreInitializeMenuScreen(void);
/// @brief
void game__InitializeMenuScreen(void);
/// @brief
void game__TerminateMenuScreen(void);

// =============================================================================
// == UPDATES ==================================================================
// =============================================================================

/// @brief
void game__FixedUpdateMenuScreen(double delta);
/// @brief
void game__UpdateMenuScreen(double delta);
/// @brief
void game__RenderMenuScreen(double delta);

// =============================================================================
// == EVENTS ===================================================================
// =============================================================================

/// @brief
void game__HandleMenuScreenEvent(const wildspire__Event[static 1]);

#endif // GAME_MENU_SCREEN_H
