#pragma once
#include <SDL.h>

class Pacman;
class Fantasma;
//class Fruta;
class Moneda;
class Pared;
class NuevoEnemigo;

class Tile
{
private:
	Pacman* pacman;
	Fantasma* fantasma;
	//Fruta* fruta;
	Moneda* moneda;
	Pared* pared;
	NuevoEnemigo* nuevoEnemigo;

	int posicionX;
	int posicionY;

public:
	static const int anchoTile = 40;
	static const int altoTile = 40;

public:
	Tile();
	Tile(int _x, int _y);

	Pacman* getPacman() { return pacman; }
	Fantasma* getFantasma() { return fantasma; }
	//Fruta* getFruta() { return fruta; }
	Moneda* getMoneda() { return moneda; }
	Pared* getPared() { return pared; }
	NuevoEnemigo* getNuevoEnemigo() { return nuevoEnemigo; }
	int getPosicionX() { return posicionX; }
	int getPosicionY() { return posicionY; }

	void setPacman(Pacman* _pacman) { pacman = _pacman; }
	void setFantasma(Fantasma* _fantasma) { fantasma = _fantasma; }
	//void setFruta(Fruta* _fruta) { fruta = _fruta; }
	void setMoneda(Moneda* _moneda) { moneda = _moneda; }
	void setPared(Pared* _pared) { pared = _pared; }
	void setNuevoEnemigo(NuevoEnemigo* _nuevoEnemigo) { nuevoEnemigo = _nuevoEnemigo; }
	void setPosicionX(int _posicionX) { posicionX = _posicionX; }
	void setPosicionY(int _posicionY) { posicionY = _posicionY; }

};

