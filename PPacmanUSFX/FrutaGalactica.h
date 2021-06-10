#pragma once
#include "Fruta.h"
class FrutaGalactica :
    public Fruta
{
private:
    int cambioDireccion;
    int puntosMenos;

public:
    FrutaGalactica(Texture* _frutaTextura, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla);

    int getCambioDireccion() { return cambioDireccion; }
    int getPuntosMenos() { return puntosMenos; }

    void setRalentizacion(int _cambioDireccion) { cambioDireccion = _cambioDireccion; }
    void setPuntosMenos(int _puntosMenos) { puntosMenos = _puntosMenos; }
};

