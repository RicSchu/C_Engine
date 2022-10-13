#include "CEpch.h"
#include "Application.h"
#include "C_Engine/Events/ApplicationEvent.h"
#include "C_Engine/Log.h"
#include <GLFW/glfw3.h>


namespace C_Engine {

	Application::Application(){
		m_Window = std::unique_ptr<Window>(Window::Create());
	}

	Application::~Application(){}

	void Application::Run() {
		while (m_Running) {
			glClearColor(1, 0, 1, 1);
			glClear(GL_COLOR_BUFFER_BIT);
			m_Window->OnUpdate();
		}
	}

	bool Application::OnWindowClose(WindowCloseEvent& e)
	{
		m_Running = false;
		return true;
	}
}
