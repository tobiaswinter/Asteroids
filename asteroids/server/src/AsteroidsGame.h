#pragma once

#include <thread>
#include <vector>

class CAsteroidsGame
{
public:
	CAsteroidsGame();
	~CAsteroidsGame();
private:
	std::thread m_gameThread;
	bool m_bExitFlag = false;
	void ThreadFunction();
public:
	void Update();
	void Initialize();
};

