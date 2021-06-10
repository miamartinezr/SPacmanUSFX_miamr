#pragma once
#include "Fruta.h"
class FrutaClasica :
    public Fruta
{
public:
	FrutaClasica(Texture* _frutaTexture, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla);

	//Manejador de Eventos
};

