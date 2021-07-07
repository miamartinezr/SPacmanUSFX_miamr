#include "FantasmaFactory.h"


Fantasma* FantasmaFactory::tipoClasicoBlinky = nullptr;
Fantasma* FantasmaFactory::tipoClasicoClyde = nullptr;
Fantasma* FantasmaFactory::tipoClasicoInkey = nullptr;
Fantasma* FantasmaFactory::tipoClasicoPinky = nullptr;

Fantasma* FantasmaFactory::tipoGalacticoBlinky = nullptr;
Fantasma* FantasmaFactory::tipoGalacticoClyde = nullptr;
Fantasma* FantasmaFactory::tipoGalacticoInkey = nullptr;
Fantasma* FantasmaFactory::tipoGalacticoPinky = nullptr;

Fantasma* FantasmaFactory::getTipoClasicoBlinky()
{
	return tipoClasicoBlinky->clone();
}

Fantasma* FantasmaFactory::getTipoClasicoClyde()
{
	return tipoClasicoClyde->clone();
}

Fantasma* FantasmaFactory::getTipoClasicoInkey()
{
	return tipoClasicoInkey->clone();
}

Fantasma* FantasmaFactory::getTipoClasicoPinky()
{
	return tipoClasicoPinky->clone();
}

Fantasma* FantasmaFactory::getTipoGalacticoBlinky()
{
	 return tipoGalacticoBlinky->clone();
}

Fantasma* FantasmaFactory::getTipoGalacticoClyde()
{
	return tipoGalacticoClyde->clone();
}

Fantasma* FantasmaFactory::getTipoGalacticoInkey()
{
	return tipoGalacticoInkey->clone();
}

Fantasma* FantasmaFactory::getTipoGalacticoPinky()
{
	return tipoGalacticoPinky->clone();
}
