#include"SandBox.h"

SOONMOOM_BEGIN

	CSandBox::CSandBox()
	{
		//
	}

	CSandBox::~CSandBox()
	{
		//
	}

	void CSandBox::Run()
	{
		std::cout << "SandBox Run" << std::endl;

		while (GetRunState())
		{
			Over();
		}

	}

SOONMOOM_END
