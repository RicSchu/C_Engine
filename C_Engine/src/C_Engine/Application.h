#pragma once
//#include "CEpch.h"
#include "Core.h"
#include "Events/Event.h"
#include "Window.h"
#include "C_Engine/Events/ApplicationEvent.h"


namespace C_Engine{

	class C_Engine_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();

	private:
		bool OnWindowClose(WindowCloseEvent& e);
		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
	};

	


	//Is defined in CLIENT
	Application* CreateApplication();

}
