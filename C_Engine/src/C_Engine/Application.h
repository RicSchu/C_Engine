#pragma once
#include "Core.h"
#include "Events/Event.h"

namespace C_Engine{

	class C_Engine_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	//Is defined in CLIENT
	Application* CreateApplication();

}
