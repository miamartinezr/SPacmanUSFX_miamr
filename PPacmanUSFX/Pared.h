#pragma once
#include <SDL.h>

#include "GameObject.h"
#include "Texture.h"

class Pared :
	public GameObject
{
public:
	Pared(Texture* _paredTexture, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla);
};

