#pragma once
#include"SoonMoomEG/SoonMoomEG.h"

SOONMOOM_BEGIN

	class CSandBox
		:public SoonMoom::CApplication
	{
	public:
		CSandBox();
		~CSandBox();

		virtual void Run()override;
	private:

	};


	CApplication* CreatApplicationInstance()
	{
		return new CSandBox();
	}

SOONMOOM_END
