#pragma once
#include <iostream>
#include <vector>
#include <SDL.h>

#include "GameActor.h"
#include "Texture.h"
#include "TileGraph.h"
#include "Tile.h"
class DrMalvado :
	public GameActor
{
protected:
	int tiempoVisible;
	int tiempoInvisible;

	int contadorTiempoVisible;
	int contadorTiempoInvisible;
	int numeroDrVisible;
public:
	DrMalvado(Tile* _tile, Texture* _texture);

	int getTiempoVisible() { return tiempoVisible; }
	int getTiempoInvisible() { return tiempoInvisible; }

	void setTiempoVisible(int _tiempoVisible) { tiempoVisible = _tiempoVisible; }
	void setTiempoInvisible(int _tiempoInvisible) { tiempoInvisible = _tiempoInvisible; }
	void setTileActual(Tile* _tileNuevo) {};

	void update();
	void deleteGameObject();
	void handleEvent(SDL_Event* event) {};
};



