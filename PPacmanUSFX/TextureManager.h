#pragma once
#include<map>
#include "Texture.h"
using namespace std;

class TextureManager
{
private:
	map<string, Texture*> mapTexturas;

	const string pathPacman = "Resources/PacMan.bmp";
	const string pathPacman2 = "Resources/PacMan.bmp";
	const string pathFantasma1 = "Resources/Pacmanultimo.bmp";
	const string pathFantasma2 = "Resources/fantasmaamarillo.bmp";
	const string pathFantasma3 = "Resources/azul.png";
	const string pathFantasma4 = "Resources/fantasma.png";
	const string pathFrutaClasica = "Resources/Frutas.png";
	const string pathFrutaGalactica = "Resources/espacial2.png";
	const string pathMoneda = "Resources/Monedas02.jpg";
	const string pathSuperMoneda = "Resources/coint1.png";
	const string pathPared1 = "Resources/Muro.png";
	//const string pathPared2 = "Resources/Muro2.png";
	//const string pathPared3= "Resources/Muro.png";
	const string pathPared4 = "Resources/Muro2.png";
	const string pathNuevoEnemigo = "Resources/Maldad1.png";

	Texture* pacmanTexture;
	Texture* pacman2Texture;
	Texture* fantasma1Texture;
	Texture* fantasma2Texture;
	Texture* fantasma3Texture;
	Texture* fantasma4Texture;
	Texture* frutaClasicaTexture;
	Texture* frutaGalacticaTexture;
	Texture* monedaTexture;
	Texture* superMonedaTexture;
	Texture* pared1Texture;
	//Texture* pared2Texture;
	//Texture* pared3Texture;
	Texture* pared4Texture;
	Texture* nuevoEnemigoTexture;

public:
	TextureManager();
	~TextureManager();

	Texture* getTexture(string _key) { return mapTexturas[_key]; }
	void addTexture(string _key, Texture* _texture);
	void free();
};


