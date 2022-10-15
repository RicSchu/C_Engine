#include <C_Engine.h>


class Sandbox : public C_Engine::Application
{
public:
	Sandbox()
	{
		CE_INFO("Starting Sandbox");
	}

	~Sandbox()
	{

	}

};

C_Engine::Application* C_Engine::CreateApplication()
{
	return new Sandbox();
}