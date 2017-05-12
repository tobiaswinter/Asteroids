#include "AsteroidsGame.h"

CAsteroidsGame::CAsteroidsGame()
{
}

CAsteroidsGame::~CAsteroidsGame()
{
}

void CAsteroidsGame::ThreadFunction()
{
	while (!m_bExitFlag)
	{
		Update();
	}
}

void CAsteroidsGame::Update()
{
}

void CAsteroidsGame::Initialize()
{
}
