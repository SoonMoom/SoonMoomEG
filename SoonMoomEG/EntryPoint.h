#pragma once
#include"Application.h"
#ifdef SOONMOOM_PLATFORM_WINDOWS


SOONMOOM_BEGIN

extern CApplication* CreatApplicationInstance();

SOONMOOM_END


int main()
{
	auto app = SoonMoom::CreatApplicationInstance();

	app->Run();

	delete app;
}


#endif // SOONMOOM_PLATFORM_WINDOWS