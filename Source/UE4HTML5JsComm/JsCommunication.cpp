#include "JsCommunication.h"

#include "Engine.h"
#include "EngineGlobals.h"

#ifdef __EMSCRIPTEN__
#include "SDL/SDL.h"
#include "emscripten/emscripten.h"
#include "emscripten/html5.h"
#endif

void UJsCommunication::JSSend()
{
    GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, "JSSend called!");

#ifdef __EMSCRIPTEN__
    emscripten_run_script("JSFromUnreal();");
#endif
}