#pragma once
#include <iostream>
#include <vector>
#include <SDL.h>

#include "GameObject.h"
//#include "Texture.h"
#include "TileGraph.h"

using namespace std;

enum TIPO_FRUTA {
	TIPO_FRUTA_GUINDA,
	TIPO_FRUTA_PLATANO,
	TIPO_FRUTA_NARANJA,
	TIPO_FRUTA_FRUTILLA,
	TIPO_FRUTA_MAXIMO
};

class Fruta : public GameObject {

	TIPO_FRUTA tipoFruta;

	int tiempoVisible;
	int tiempoInvisible;

	int contadorTiempoVisible;
	int contadorTiempoInvisible;
	int numeroFrutaVisible;

	Tile* tileActual;

public:
	//Constructores y destructores
	Fruta(Tile* _tile, Texture* _frutaTexture, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla);
	//~Fruta();

	//Metodos accesores
	
	TIPO_FRUTA getTipoFruta() { return tipoFruta; }
	int getTiempoVisible() { return tiempoVisible; }
	int getTiempoInvisible() { return tiempoInvisible; }
	Tile* getTileActual() { return tileActual; }

	void setTipoFruta(TIPO_FRUTA _tipoFruta) { tipoFruta = _tipoFruta; }
	void setTiempoVisible(int _tiempoVisible) { tiempoVisible = _tiempoVisible; }
	void setTiempoInvisible(int _tiempoInvisible) { tiempoInvisible = _tiempoInvisible; }
	void setTileActual(Tile* _tileNuevo);

	// Metodos varios

	// Manejador de eventos de la fruta
	//void handleEvent(SDL_Event& e);

	// Mostrar u ocultar la fruta
	void update();
	// Renderizar imagen fruta
	//void render();
};
