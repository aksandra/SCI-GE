#include <cstdlib>
#include <sci/Application.hpp>
#include<SDL2/sdl.h>
#include<iostream>

using namespace std;



int status = 0;

int main(int argc, char* argv[])
{
    Application::create_instance();
	//okienko
	SDL_Window*window = SDL_CreateWindow("SCI1", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_OPENGL | SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);

	while (status == 0)
	{
		SDL_Event event;

		while (SDL_PollEvent(&event)) 
		{
			switch(event.type )

				case SDL_KEYDOWN:
				case SDL_KEYUP:

					cout << event.key.timestamp;
					cout << " ";
					cout << event.key.keysym.scancode;

					break;
		}
	}
	 
     return 0;
}
