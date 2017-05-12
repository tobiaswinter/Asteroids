#pragma once

#include <time.h>

class CGameTime
{
public:
	CGameTime();
	~CGameTime();
private:
	clock_t m_oldTime;
public:
	float GetDeltaTime();
	void UpdateTime();
};

