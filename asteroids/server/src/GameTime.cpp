#include "GameTime.h"



CGameTime::CGameTime()
{
}


CGameTime::~CGameTime()
{
}


float CGameTime::GetDeltaTime()
{
	return ((float)(clock() - m_oldTime)) / CLOCKS_PER_SEC;
}


void CGameTime::UpdateTime()
{
	m_oldTime = clock();
}
