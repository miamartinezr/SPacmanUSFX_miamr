#pragma once
#include "Pared.h"
#include "Wall.h"
class ParedGalacticoAdapter:
    public Pared, private Wall
{
public:
    ParedGalacticoAdapter(Tile* _tile, Texture* _paredTextura, int _posicionX, int _posicionY);
    void render() override { Wall::Render(); }
};


