#include "Application.h"
#include "C_Engine/Events/ApplicationEvent.h"
#include "C_Engine/Log.h"

namespace C_Engine {

	Application::Application(){}

	Application::~Application(){}

	void Application::Run() {
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			CE_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			CE_TRACE(e);
		}

		while (true);
	}
}
