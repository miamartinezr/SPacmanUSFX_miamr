#pragma once
#include "Fantasma.h"
class Enemigo2 :
    public Fantasma
{
private:

public:
    Enemigo2(Tile* _tile, Texture* _fantasmaTexture, int _posicionX, int posicionY, int _ancho, int _alto, int anchoPantalla, int altoPantalla, int _velocidadPatron);
};

