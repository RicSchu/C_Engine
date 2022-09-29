#pragma once

namespace C_Engine {
	_declspec(dllimport) void Print();

}


void main() {
	C_Engine::Print();
}