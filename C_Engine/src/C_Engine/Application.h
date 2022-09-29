#pragma once
#include "Core.h"

namespace C_Engine{

	class CE_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	//Is defined in CLIENT
	Application* CreateApplication();

}
