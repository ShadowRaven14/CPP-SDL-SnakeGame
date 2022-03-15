#include "AppleObject.h"
#include "TextureManager.h"

AppleObject::AppleObject(const char* texturesheet, int x, int y)
{
	std::cout << "Nowe Apple na ziemi" << std::endl;
	objTexture = TextureManager::LoadTexture(texturesheet);

	srand((unsigned)time(NULL));
	xpos = (rand() % (25 - 2) + 1) * 32;
	ypos = (rand() % (20 - 2) + 1) * 32;
	qx = true, qy = true;
}

AppleObject::~AppleObject()
{
	//pusto
}

void AppleObject::Update()
{
	/*
	if (xpos == 768) qx = false;
	if (xpos == 0) qx = true;

	if (ypos == 608) qy = false;
	if (ypos == 0) qy = true;

	if (qx == true) xpos = xpos + 2;
	else if (qx == false) xpos = xpos - 2;

	if (qy == true) ypos = ypos + 2;
	else if (qy == false) ypos = ypos - 2;
	*/




	srcRect.h = 64;
	srcRect.w = 64;
	srcRect.x = 0;
	srcRect.y = 0;

	destRect.h = srcRect.h / 2;
	destRect.w = srcRect.w / 2;
	destRect.x = xpos;
	destRect.y = ypos;
}

void AppleObject::Render()
{
	SDL_RenderCopy(Game::renderer, objTexture, &srcRect, &destRect);
}