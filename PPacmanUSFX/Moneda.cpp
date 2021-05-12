#include "Moneda.h"

Moneda::Moneda(/*Tile* _tile,*/ Texture* _monedaTexture, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla) :
	GameObject(_monedaTexture, _posicionX, _posicionY, _ancho, _alto, _anchoPantalla, _altoPantalla)
{
	//tileActual = _tile;
	tipoMoneda = TIPO_MONEDA_NORMAL;
	valorMoneda = 1;

	/*if (tileGraph)
		cout << "no es nulo" << endl;
	else
		cout << "es nulo" << endl;*/

}
//void Moneda::setTileActual(Tile* _tileNuevo)
//{
//	if (tileActual != nullptr)
//		tileActual->setMoneda(nullptr);
//
//	tileActual = _tileNuevo;
//
//	if (tileActual != nullptr) {
//		tileActual->setMoneda(this);
//
//		posicionX = tileActual->getPosicionX() * Tile::anchoTile;
//		posicionY = tileActual->getPosicionY() * Tile::altoTile;
//
//
//	}
//
//	
//}
