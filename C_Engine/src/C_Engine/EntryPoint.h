#pragma once

#ifdef CE_PLATFORM_WINDOWS

extern C_Engine::Application* C_Engine::CreateApplication();

//Creates and destroys application
int main(int argc, char** argv)
{
	auto app = C_Engine::CreateApplication();
	app->Run();
	delete app;
}


#endif