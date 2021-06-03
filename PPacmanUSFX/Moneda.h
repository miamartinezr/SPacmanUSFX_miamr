#pragma once
#include <SDL.h>
#include <vector>
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
    int valorMoneda;
    TIPO_MONEDA tipoMoneda;
    Tile* tileActual;

public:

    Moneda(Tile* _tile, Texture* _monedaTexture, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla);

    int getValorMoneda() { return valorMoneda; }
    TIPO_MONEDA getTipoMoneda() { return tipoMoneda; }
    Tile* getTile() { return tileActual; }

    void setValorMoneda(int _valorMoneda) { valorMoneda = _valorMoneda; }
    void setTipoMoneda(TIPO_MONEDA _tipoMoneda) { tipoMoneda = _tipoMoneda; }
    void setTile(Tile* _tileNuevo);

    void deleteGameObject() override;
    //void render();
};



