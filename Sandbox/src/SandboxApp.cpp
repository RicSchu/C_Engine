#include <C_Engine.h>


class ExampleLayer :public C_Engine::Layer {
public: 
	ExampleLayer():Layer("Eeheehehehe") {

	}

	void OnUpdate() override
	{
		if (C_Engine::Input::IsKeyPressed(CE_KEY_TAB))
			CE_TRACE("Tab key is pressed (poll)!");
	}

	void OnEvent(C_Engine::Event& event) override
	{
		if (event.GetEventType() == C_Engine::EventType::KeyPressed)
		{
			C_Engine::KeyPressedEvent& e = (C_Engine::KeyPressedEvent&)event;
			if (e.GetKeyCode() == CE_KEY_TAB)
				CE_TRACE("Tab key is pressed (event)!");
			CE_TRACE("{0}", (char)e.GetKeyCode());
		}
	}
};


class Sandbox : public C_Engine::Application
{
public:
	Sandbox()
	{
		CE_INFO("Starting Sandbox");
		PushLayer(new ExampleLayer());
		PushOverlay(new C_Engine::ImGuiLayer());
	}

	~Sandbox()
	{

	}

};

C_Engine::Application* C_Engine::CreateApplication()
{
	return new Sandbox();
}