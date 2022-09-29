#pragma once

#ifdef CE_PLATFORM_WINDOWS

extern C_Engine::Application* C_Engine::CreateApplication();

//Creates and destroys application
int main(int argc, char** argv)
{	
	C_Engine::Log::Init();
	CE_CORE_WARN("Initialized Log!");
	int a = 5;
	CE_INFO("Hello! Var={0}", a);

	auto app = C_Engine::CreateApplication();
	app->Run();
	delete app;
}


#endif