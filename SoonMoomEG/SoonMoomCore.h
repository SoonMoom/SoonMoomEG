#pragma once


#ifdef SOONMOOM_PLATFORM_WINDOWS
	#ifdef SOONMOOM_BULD
		#define SoonMoom_API _declspec(dllexport)
	#else
		#define SoonMoom_API _declspec(dllimport)
	#endif // SOONMOOM_BULD
#else
#error SoonMoom Just only support Windows!
#endif // SOONMOOM_PLATFORM_WINDOWS
///////////////////////////////////////////////////
#define SOONMOOM_BEGIN namespace SoonMoom{
#define SOONMOOM_END }
///////////////////////////////////////////////////