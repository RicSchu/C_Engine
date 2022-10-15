#pragma once
//#include "CEpch.h"
#include "Core.h"
#include "Window.h"
#include "C_Engine/LayerStack.h"
#include "C_Engine/Events/Event.h"
#include "C_Engine/Events/ApplicationEvent.h"


namespace C_Engine{

	class C_Engine_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();

		void OnEvent(Event& e);

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* layer);

		inline Window& GetWindow() { return *m_Window; }

		inline static Application& Get() { return *s_Instance; }

	private:
		bool OnWindowClose(WindowCloseEvent& e);
		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
		LayerStack m_LayerStack;

	private:
		static Application* s_Instance;
	};

	


	//Is defined in CLIENT
	Application* CreateApplication();

}
