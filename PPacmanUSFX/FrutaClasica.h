#pragma once
#include "Fruta.h"
class FrutaClasica :
    public Fruta
{
private:
	int puntosAumento;
	int vidaExtra;

public:
	FrutaClasica(Texture* _frutaTexture, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla);
	int getPuntosAumento() { return puntosAumento; }
	int getVidaExtra() { return vidaExtra; }

	void setPuntosAumento(int _puntosAumento) { puntosAumento = _puntosAumento; }
	void setVidaExtra(int _vidaExtra) { vidaExtra = _vidaExtra; }

	//Manejador de Eventos
};

