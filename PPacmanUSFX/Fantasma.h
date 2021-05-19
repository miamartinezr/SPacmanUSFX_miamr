#pragma once
#include <iostream>
#include <string>
#include <SDL.h>
#include <algorithm>

#include "GameObject.h"
#include "Texture.h"
#include "Tile.h"
#include "TileGraph.h"
#include "MoveDirection.h"

using namespace std;

class Fantasma : public GameObject{
private:
	int velocidadX;
	int velocidadY;

	int velocidadPatron;

	int posicionXDestino;
	int posicionYDestino;

	int incrementoPosicionX;
	int incrementoPosicionY;

	Tile* tileActual;
	Tile* tileSiguiente;
	MoveDirection direccionActual;
	MoveDirection direccionSiguiente;
	 
	bool tratarDeMover(MoveDirection _direccionNueva);
public:
	// Constructores y destructores
	Fantasma(Tile* _tile, Texture* _fantasmaTexture, int _posicionX, int posicionY, int _ancho, int _alto, int anchoPantalla, int altoPantalla, int _velocidadPatron);
	//~Fantasma();

	//MetodosAccesores
	
	int getVelocidadX() { return velocidadX; }
	int getVelocidadY() { return velocidadY; }
	int getVelocidadPatron() { return velocidadPatron; }
	Tile* getTile() { return tileActual; }
	Tile* getTileSiguiente() { return tileSiguiente; }
	
	void setVelocidadX(int _velocidadX) { velocidadX = _velocidadX; }
	void setVelocidadY(int _velocidadY) { velocidadY = _velocidadY; }
	void setVelocidadPatrton(int _velocidadPatron) { velocidadPatron = _velocidadPatron; }
	void setTile(Tile* _tileNuevo);
	void setTileSiguiente(Tile* _tileNuevoSiguiente) { tileSiguiente = _tileNuevoSiguiente; }
	
	//Metodos varios
	
	// Actualizar datos fantasma
	void update() override;
};