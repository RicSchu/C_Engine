#pragma once
//Macros for dllimport and dllexport
#ifdef CE_PLATFORM_WINDOWS
	#ifdef CE_BUILD_DLL
		#define C_Engine_API __declspec(dllexport)
	#else
		#define C_Engine_API __declspec(dllimport)
	#endif
#else
	#error C_Engine only supports Windows!
#endif