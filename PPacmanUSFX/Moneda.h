#pragma once
#include <SDL.h>
#include "GameObject.h"
#include "Texture.h"
#include "TileGraph.h"

enum TIPO_MONEDA {
    TIPO_MONEDA_NORMAL,
    TIPO_MONEDA_SUPER,
};
class Moneda :
    public GameObject
{
private:
    TIPO_MONEDA tipoMoneda;
    int valorMoneda;
    Tile* tileActual;

public:
    
    Moneda(Tile* _tile, Texture* _monedaTexture, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla);
     
    TIPO_MONEDA getTipoMoneda() {return tipoMoneda; }
    int getValorMoneda() { return valorMoneda; }
    Tile* getTileActual() { return tileActual; }

    void setTipoMoneda(TIPO_MONEDA _tipoMoneda) { tipoMoneda = _tipoMoneda; }
    void setValorMoneda(int _valorMoneda) { valorMoneda = _valorMoneda; }
    void setTileActual(Tile* _tileNuevo);

    //void render();
};

