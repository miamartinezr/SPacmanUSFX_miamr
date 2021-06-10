#pragma once
#include "GameObject.h"
#include "MazeObject.h"
#include "TileGraph.h"

class Pared :
	public GameObject
{
private:
	Tile* tileActual;
public:
	Pared(Tile* _tile, Texture* _paredTexture, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla);
	Tile* getTile() { return tileActual; }
	void setTile(Tile* _tileNuevo);
};

