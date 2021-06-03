#pragma once
#include "Pacman.h"
class Pacman2 :
    public Pacman
{

public:

	Pacman2(Tile* _tile, Texture* _texturaPacman, int _posicionX,
		int _posicionY, int _ancho,
		int _alto, int _anchoPantalla, int _altoPantalla, int _velocidadPatron);

	// Manejador de eventos de pacman
	void handleEvent(SDL_Event* event) override;
};

