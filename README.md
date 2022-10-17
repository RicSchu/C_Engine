"C_Engine" by Richard Schultheis (ai21m031), following the game engine series by TheCherno @ https://www.youtube.com/c/TheChernoProject

Cherno walkthrough Engine, aptly named C_Engine. 
The engine implements the contents of the Cherno Hazel engine series from video 1 to 20 (Key and Mouse Codes, available at @ https://www.youtube.com/watch?v=zaJGn8pur5I&list=PLlrATfBNZ98dC-V-N3m0Go4deliWHPFwT&index=20 (Last accessed at 17.10.2022))

How to build: 
Recursively clone the repository and build with premake by executing GenerateProjects.bat in the main directory.
The build is targeted for Visual Studio 17 2022. 
Finish the build with the proper version of VS and run. 

commands: 
cmd
	git clone https://github.com/RicSchu/C_Engine --recursive
	cd C_Engine 
	GenerateProjects.bat
Run C_Engine.sln and build in VS 17 2022

The project contains the following submodules: 
	-Glad (MIT license)
	-GLFW (zlib License) (modified with custom premake-lua file for build, forked)
	-imgui (zlib License) (personal forked) 
	-spdlog (MIT license)

Functionalities: 
Basic Game Engine Implementation
	-Building with premake
	-Precompiled Headers
	-Logging with spdlog
	-Event system	
		-Window events
		-Mouse & Key events
	-Input Polling
	-GUI with dear imgui

Implemented in a Sandbox application that displays imgui settings. 
	