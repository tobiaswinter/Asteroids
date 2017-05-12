#include <Windows.h>
#include <random>
#include <iostream>
#include "AsteroidsGame.h"
#include "AsteroidsRenderer.h"

int main(int argc, char* argv[])
{
	CAsteroidsGame game;
	CAsteroidsRenderer renderer;
	game.Initialize();
	renderer.Initialize(game);
	return 0;
}