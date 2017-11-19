#pragma once

#include "Engine.h"

namespace Engine
{
	namespace Hook
	{
		bool Initialize();
		void Shutdown();
	}
}


struct backtrackData {
	float simtime;
	Vector hitboxPos;
};