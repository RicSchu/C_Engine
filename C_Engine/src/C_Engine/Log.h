#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace C_Engine {

	class C_Engine_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core logging macros
#define CE_CORE_TRACE(...)    ::C_Engine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CE_CORE_INFO(...)     ::C_Engine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CE_CORE_WARN(...)     ::C_Engine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CE_CORE_ERROR(...)    ::C_Engine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CE_CORE_FATAL(...)    ::C_Engine::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client logging macros
#define CE_TRACE(...)	      ::C_Engine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define CE_INFO(...)	      ::C_Engine::Log::GetClientLogger()->info(__VA_ARGS__)
#define CE_WARN(...)	      ::C_Engine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define CE_ERROR(...)	      ::C_Engine::Log::GetClientLogger()->error(__VA_ARGS__)
#define CE_FATAL(...)	      ::C_Engine::Log::GetClientLogger()->fatal(__VA_ARGS__)