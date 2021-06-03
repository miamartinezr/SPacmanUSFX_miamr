#include "Enemigo2.h"


using namespace std;

Enemigo2::Enemigo2(Tile* _tile, Texture* _fantasmaTexture, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla, int _velocidadPatron) :
	Fantasma(_tile, _fantasmaTexture, _posicionX, posicionY, _ancho, _alto, anchoPantalla, altoPantalla, _velocidadPatron) {

}