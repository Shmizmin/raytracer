/*#pragma once

#ifdef WL_PLATFORM_WINDOWS

extern Walnut::Application* Walnut::CreateApplication(int argc, char** argv);
bool g_ApplicationRunning = true;

namespace Walnut
{
	int Main(int argc, char** argv)
	{
		while (g_ApplicationRunning)
		{
			Walnut::Application* app = Walnut::CreateApplication(argc, argv);
			app->Run();
			delete app;
		}

		return 0;
	}
}

#ifdef WL_DIST

#include <Windows.h>

int APIENTRY WinMain(HINSTANCE hInst, HINSTANCE hInstPrev, PSTR cmdline, int cmdshow)
{
	return Walnut::Main(__argc, __argv);
}

#else

int main(int argc, char** argv)
{
	return Walnut::Main(argc, argv);
}

#endif // WL_DIST

#endif // WL_PLATFORM_WINDOWS*/

import std;

#include "arguments.h"
#include "application.h"
#include "renderer.h"

luma::Options luma::_options;

int main(int argc, char** argv)
{
	auto arguments = luma::Arguments{};
	arguments.parse(argc, argv);

	auto application = luma::Application{};
	auto renderer = luma::Renderer{};
	renderer.render();

    // window title "Luma"
    // window width 1600
    // window height 900

	return 0;
}