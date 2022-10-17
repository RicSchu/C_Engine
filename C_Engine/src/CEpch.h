#pragma once
/*
A precompiled header (PCH) is a header file that is compiled to an intermediate binary PCH
that compiles faster, thus reducing total compilation time.

*/
#include <iostream>
#include <memory>
#include <utility>
#include <algorithm>
#include <functional>

#include <string>
#include <sstream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

#include "C_Engine/Log.h"

#include "C_Engine/ImGui/ImGuiLayer.h"

#ifdef CE_PLATFORM_WINDOWS
	#include <Windows.h>
#endif