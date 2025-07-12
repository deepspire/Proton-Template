#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#endif

#include "proton/proton.hh"


int main([[maybe_unused]] int argc, [[maybe_unused]] char **argv)
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif

    Proton::Display display("Proton2D Template", 600, 500);
    display.startRendering();
    return 0;
}
