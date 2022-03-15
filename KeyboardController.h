#pragma once
#include "Game.h"

class KeyboardController
{
public:
	//TransformComponent
	void update()
	{
		if (Game::event.type == SDL_KEYDOWN)
		{
			switch (Game::event.key.keysym.sym)
			{
			case SDLK_w:
				break;


			default:
				break;
			}
		}

		if (Game::event.type == SDL_KEYUP)
		{

		}
	}

};

