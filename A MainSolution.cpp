#include "Game.h"
Game* game = nullptr;
Game* menu = nullptr;

//#define WIDTH 20					// Szerokoœæ Planszy
//#define HEIGHT 25					// Wysokoœæ Planszy
//char Level[HEIGHT][WIDTH];		// Plansza


int main(int argc, char* argv[])
{
    const int FPS = 60;
    const int frameDelay = 1000 / FPS;

    Uint32 frameStart;
    int frameTime;

    game = new Game();
    game->init("GameWindow", 1312, 928, false);

    while (game->running())
    {
        frameStart = SDL_GetTicks();

        game->handleEvents();
        game->update();
        game->render();

        frameTime = SDL_GetTicks() - frameStart;

        if (frameDelay > frameTime)
        {
            SDL_Delay(frameDelay - frameTime);
        }           
    }

    game->clean();
    return 0;

}



/*
    * Pierwszy Odcinek
    *
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window* window = SDL_CreateWindow("Snake", SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);

    SDL_Renderer* renderer = SDL_CreateRenderer(window, 0, -1);
    SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);

    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);
    SDL_Delay(10000);

    std::cout << "Hello World!\n";
    return 0;
*/
