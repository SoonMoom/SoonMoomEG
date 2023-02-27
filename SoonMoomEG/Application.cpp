#include"Application.h"
#include<iostream>

SOONMOOM_BEGIN

	std::mutex g_AppRunStateMutex;
	CApplication::CApplication()
	{
	}

	CApplication::~CApplication()
	{
	}

	void CApplication::Over()
	{
		std::lock_guard<std::mutex> Locker_(g_AppRunStateMutex);
		m_IsRunning = false;
	}

	bool CApplication::GetRunState()
	{
		std::lock_guard<std::mutex> Locker_(g_AppRunStateMutex);
		return m_IsRunning;
	}

SOONMOOM_END