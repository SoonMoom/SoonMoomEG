#pragma once
#include"SoonMoom_PCH.h"
#include"SoonMoomCore.h"

SOONMOOM_BEGIN

	extern std::mutex g_AppRunStateMutex;

	class SoonMoom_API  CApplication
	{
	public:
		CApplication();
		~CApplication();

		virtual void Run() = 0;

		void Over();

		bool GetRunState();


	private:

		bool m_IsRunning = true;

	};

SOONMOOM_END