#include "wildspire_assets.h"
#include "wildspire_audio.h"
#include "wildspire_core.h"
#include "wildspire_core_clock.h"
#include "wildspire_core_errors.h"
#include "wildspire_debug.h"
#include "wildspire_entities.h"
#include "wildspire_events.h"
#include "wildspire_events_bus.h"
#include "wildspire_events_types.h"
#include "wildspire_files.h"
#include "wildspire_graphics.h"
#include "wildspire_physics.h"
#include "wildspire_scenes.h"
#include "wildspire_ui.h"

#include "game_main_screen.h"
#include "game_menu_screen.h"
#include "game_splash_screen.h"

// =============================================================================
// == HELPERS ==================================================================
// =============================================================================

static void _PreInitializeEngine(void);
static void _InitializeEngine(void);
static void _TerminateEngine(void);

static void _PreInitializeGame(void);
static void _InitializeGame(void);
static void _TerminateGame(void);

static void _EarlyUpdateEngine(double delta);
static void _UpdateEngine(double delta);
static void _LateUpdateEngine(double delta);
static void _FixedUpdateEngine(double delta);

static void _EarlyUpdateGame(double delta);
static void _UpdateGame(double delta);
static void _LateUpdateGame(double delta);
static void _FixedUpdateGame(double delta);

static void _HandleEngineEvent(const wildspire__Event event[static 1]);
static void _HandleGameEvent(const wildspire__Event event[static 1]);

// =============================================================================
// == MAIN =====================================================================
// =============================================================================

int main(void) {
  _PreInitializeEngine();
  _PreInitializeGame();

  _InitializeEngine();
  _InitializeGame();

  while (!wildspire__HasSeenQuitEvent()) {
    const double delta       = wildspire__Delta();
    const double fixed_delta = wildspire__FixedDelta();

    _EarlyUpdateEngine(delta);
    _EarlyUpdateGame(delta);

    while (wildspire__ShouldRunFixedUpdate()) {
      _FixedUpdateEngine(fixed_delta);
      _FixedUpdateGame(fixed_delta);
    }

    _UpdateEngine(delta);
    _UpdateGame(delta);

    wildspire__Event evt;
    while (wildspire__PollEvent(&evt)) {
      _HandleEngineEvent(&evt);
      _HandleGameEvent(&evt);
    }

    _LateUpdateGame(delta);
    _LateUpdateEngine(delta);
  }

  _TerminateGame();
  _TerminateEngine();

  return wildspire__ExitCode();
}

// =============================================================================
// == HELPERS ==================================================================
// =============================================================================

static void _PreInitializeEngine(void) {
  wildspire__PreInitializeCoreSubsystem();
  wildspire__PreInitializeFileSubsystem();
  wildspire__PreInitializeDebugSubsystem();
  wildspire__PreInitializeGraphicsSubsystem();
  wildspire__PreInitializeAudioSubsystem();
  wildspire__PreInitializeEventsSubsystem();
  wildspire__PreInitializeUiSubsystem();
  wildspire__PreInitializeEntitiesSubsystem();
  wildspire__PreInitializePhysicsSubsystem();
  wildspire__PreInitializeAssetsSubsystem();
  wildspire__PreInitializeSceneSubsystem();
}

static void _InitializeEngine(void) {
  wildspire__InitializeCoreSubsystem();
  wildspire__InitializeFileSubsystem();
  wildspire__InitializeDebugSubsystem();
  wildspire__InitializeGraphicsSubsystem();
  wildspire__InitializeAudioSubsystem();
  wildspire__InitializeEventsSubsystem();
  wildspire__InitializeUiSubsystem();
  wildspire__InitializeEntitiesSubsystem();
  wildspire__InitializePhysicsSubsystem();
  wildspire__InitializeAssetsSubsystem();
  wildspire__InitializeSceneSubsystem();
}

static void _TerminateEngine(void) {
  wildspire__TerminateSceneSubsystem();
  wildspire__TerminateAssetsSubsystem();
  wildspire__TerminatePhysicsSubsystem();
  wildspire__TerminateEntitiesSubsystem();
  wildspire__TerminateUiSubsystem();
  wildspire__TerminateEventsSubsystem();
  wildspire__TerminateAudioSubsystem();
  wildspire__TerminateGraphicsSubsystem();
  wildspire__TerminateDebugSubsystem();
  wildspire__TerminateFileSubsystem();
  wildspire__TerminateCoreSubsystem();
}

static void _PreInitializeGame(void) {
  game__PreInitializeSplashScreen();
  game__PreInitializeMenuScreen();
  game__PreInitializeMainScreen();
}

static void _InitializeGame(void) {
  game__InitializeSplashScreen();
  game__InitializeMenuScreen();
  game__InitializeMainScreen();
}

static void _TerminateGame(void) {
  game__TerminateMainScreen();
  game__TerminateMenuScreen();
  game__TerminateSplashScreen();
}

static void _EarlyUpdateEngine(double delta) {
  wildspire__EarlyUpdateAssetsSubsystem(delta);
  wildspire__EarlyUpdateAudioSubsystem(delta);
  wildspire__EarlyUpdateCoreSubsystem(delta);
  wildspire__EarlyUpdateDebugSubsystem(delta);
  wildspire__EarlyUpdateEntitiesSubsystem(delta);
  wildspire__EarlyUpdateEventsSubsystem(delta);
  wildspire__EarlyUpdateFileSubsystem(delta);
  wildspire__EarlyUpdateGraphicsSubsystem(delta);
  wildspire__EarlyUpdatePhysicsSubsystem(delta);
  wildspire__EarlyUpdateSceneSubsystem(delta);
  wildspire__EarlyUpdateUiSubsystem(delta);
}

static void _UpdateEngine(double delta) {
  wildspire__UpdateAssetsSubsystem(delta);
  wildspire__UpdateAudioSubsystem(delta);
  wildspire__UpdateCoreSubsystem(delta);
  wildspire__UpdateDebugSubsystem(delta);
  wildspire__UpdateEntitiesSubsystem(delta);
  wildspire__UpdateEventsSubsystem(delta);
  wildspire__UpdateFileSubsystem(delta);
  wildspire__UpdateGraphicsSubsystem(delta);
  wildspire__UpdatePhysicsSubsystem(delta);
  wildspire__UpdateSceneSubsystem(delta);
  wildspire__UpdateUiSubsystem(delta);
}

static void _LateUpdateEngine(double delta) {
  wildspire__LateUpdateAssetsSubsystem(delta);
  wildspire__LateUpdateAudioSubsystem(delta);
  wildspire__LateUpdateCoreSubsystem(delta);
  wildspire__LateUpdateDebugSubsystem(delta);
  wildspire__LateUpdateEntitiesSubsystem(delta);
  wildspire__LateUpdateEventsSubsystem(delta);
  wildspire__LateUpdateFileSubsystem(delta);
  wildspire__LateUpdateGraphicsSubsystem(delta);
  wildspire__LateUpdatePhysicsSubsystem(delta);
  wildspire__LateUpdateSceneSubsystem(delta);
  wildspire__LateUpdateUiSubsystem(delta);
}

static void _FixedUpdateEngine(double delta) {
  wildspire__FixedUpdateAssetsSubsystem(delta);
  wildspire__FixedUpdateAudioSubsystem(delta);
  wildspire__FixedUpdateCoreSubsystem(delta);
  wildspire__FixedUpdateDebugSubsystem(delta);
  wildspire__FixedUpdateEntitiesSubsystem(delta);
  wildspire__FixedUpdateEventsSubsystem(delta);
  wildspire__FixedUpdateFileSubsystem(delta);
  wildspire__FixedUpdateGraphicsSubsystem(delta);
  wildspire__FixedUpdatePhysicsSubsystem(delta);
  wildspire__FixedUpdateSceneSubsystem(delta);
  wildspire__FixedUpdateUiSubsystem(delta);
}

static void _EarlyUpdateGame([[maybe_unused]] double delta) {
  // I do not think there should be any early updates here.
  // I keep this stub to hack in an extra early update if I ever need one
}

static void _UpdateGame(double delta) {
  game__UpdateSplashScreen(delta);
  game__UpdateMenuScreen(delta);
  game__UpdateMainScreen(delta);
}

static void _LateUpdateGame(double delta) {
  game__RenderSplashScreen(delta);
  game__RenderMenuScreen(delta);
  game__RenderMainScreen(delta);
}

static void _FixedUpdateGame(double delta) {
  game__FixedUpdateSplashScreen(delta);
  game__FixedUpdateMenuScreen(delta);
  game__FixedUpdateMainScreen(delta);
}

static void _HandleEngineEvent(const wildspire__Event event[static 1]) {
  wildspire__HandleAssetsSubsystemEvent(event);
  wildspire__HandleAudioSubsystemEvent(event);
  wildspire__HandleCoreSubsystemEvent(event);
  wildspire__HandleDebugSubsystemEvent(event);
  wildspire__HandleEntitiesSubsystemEvent(event);
  wildspire__HandleEventsSubsystemEvent(event);
  wildspire__HandleFileSubsystemEvent(event);
  wildspire__HandleGraphicsSubsystemEvent(event);
  wildspire__HandlePhysicsSubsystemEvent(event);
  wildspire__HandleSceneSubsystemEvent(event);
  wildspire__HandleUiSubsystemEvent(event);
}

static void _HandleGameEvent(const wildspire__Event event[static 1]) {
  game__HandleSplashScreenEvent(event);
  game__HandleMenuScreenEvent(event);
  game__HandleMainScreenEvent(event);
}
