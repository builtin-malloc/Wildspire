#ifndef GAME_SPLASH_SCREEN_H
#define GAME_SPLASH_SCREEN_H

#include "wildspire_events_types.h"

// =============================================================================
// == LIFE CYCLE ===============================================================
// =============================================================================

/// @brief
void game__PreInitializeSplashScreen(void);
/// @brief
void game__InitializeSplashScreen(void);
/// @brief
void game__TerminateSplashScreen(void);

// =============================================================================
// == UPDATES ==================================================================
// =============================================================================

/// @brief
void game__FixedUpdateSplashScreen(double delta);
/// @brief
void game__UpdateSplashScreen(double delta);
/// @brief
void game__RenderSplashScreen(double delta);

// =============================================================================
// == EVENTS ===================================================================
// =============================================================================

/// @brief
void game__HandleSplashScreenEvent(const wildspire__Event[static 1]);

#endif // GAME_SPLASH_SCREEN_H
