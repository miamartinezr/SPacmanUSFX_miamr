#include "TextureManager.h"

TextureManager::TextureManager()
{
	pacmanTexture = new Texture();
	pacmanTexture->loadFromImage(pathPacman);
	addTexture("pacman", pacmanTexture);
	pacman2Texture = new Texture();
	pacman2Texture->loadFromImage(pathPacman2);
	addTexture("pacman2", pacman2Texture);
	fantasma1Texture = new Texture();
	fantasma1Texture->loadFromImage(pathFantasma1);
	addTexture("fantasma1", fantasma1Texture);
	fantasma2Texture = new Texture();
	fantasma2Texture->loadFromImage(pathFantasma2);
	addTexture("fantasma2", fantasma2Texture);
	fantasma3Texture = new Texture();
	fantasma3Texture->loadFromImage(pathFantasma3);
	addTexture("fantasma3", fantasma3Texture);
	fantasma4Texture = new Texture();
	fantasma4Texture->loadFromImage(pathFantasma4);
	addTexture("fantasma4", fantasma4Texture);
	frutaClasicaTexture = new Texture();
	frutaClasicaTexture->loadFromImage(pathFrutaClasica);
	addTexture("frutaClasica", frutaClasicaTexture);
	frutaGalacticaTexture = new Texture();
	frutaGalacticaTexture->loadFromImage(pathFrutaGalactica);
	addTexture("frutaGalactica", frutaGalacticaTexture);
	monedaTexture = new Texture();
	monedaTexture->loadFromImage(pathMoneda);
	addTexture("moneda", monedaTexture);
	superMonedaTexture = new Texture();
	superMonedaTexture->loadFromImage(pathSuperMoneda);
	addTexture("supermoneda", superMonedaTexture);
	
	pared1Texture = new Texture();
	pared1Texture->loadFromImage(pathPared1);
	addTexture("pared1", pared1Texture);
	/*pared2Texture = new Texture();
	pared2Texture->loadFromImage(pathPared2);
	addTexture("pared2", pared2Texture);
	pared3Texture = new Texture();
	pared3Texture->loadFromImage(pathPared3);
	addTexture("pared3", pared3Texture);*/
	pared4Texture = new Texture();
	pared4Texture->loadFromImage(pathPared4);
	addTexture("pared4", pared4Texture);
	
	nuevoEnemigoTexture = new Texture();
	nuevoEnemigoTexture->loadFromImage(pathNuevoEnemigo);
	addTexture("nuevoenemigo", nuevoEnemigoTexture);

}

TextureManager::~TextureManager() {
	free();
}

void TextureManager::addTexture(string _key, Texture* _texture)
{
	mapTexturas[_key] = _texture;
}

void TextureManager::free()
{
	//for (auto elementoMapTexturas : mapTexturas) {
	for (pair<string, Texture*> elementoMapTexturas : mapTexturas) {
		//delete elementoMapTexturas.second;
		mapTexturas.erase(elementoMapTexturas.first);
	}
}