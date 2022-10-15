#include <C_Engine.h>


class ExampleLayer :public C_Engine::Layer {
public: 
	ExampleLayer():Layer("Eeheehehehe") {

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