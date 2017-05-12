#pragma once

#include <thread>
#include "AsteroidsGame.h"

class CAsteroidsRenderer
{
public:
	CAsteroidsRenderer();
	~CAsteroidsRenderer();
	void RenderFrame();
private:
	std::thread m_renderThread;
public:
	void Initialize(CAsteroidsGame& asteroidsGame);
};

