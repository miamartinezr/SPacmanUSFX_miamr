#pragma once
#include<map>
#include "Texture.h"
using namespace std;

class TextureManager
{
private:
	map<string, Texture*> mapTexturas;

	const string pathPacman = "Resources/PacMan.bmp";
	const string pathFantasma1 = "Resources/Blinky.bmp";
	const string pathFantasma2 = "Resources/Clyde.bmp";
	const string pathFantasma3 = "Resources/Inkey.bmp";
	const string pathFantasma4 = "Resources/Pinky.bmp";
	const string pathFruta = "Resources/frutas2.png";
	const string pathMoneda = "Resources/Monedas02.jpg";
	const string pathSuperMoneda = "Resources/coint1.png";
	const string pathPared1 = "Resources/Pared1.jpeg";
	const string pathPared2 = "Resources/Pared2.jpeg";
	const string pathPared3= "Resources/Pared3.jpeg";
	const string pathPared4 = "Resources/Pared4.jpeg";
	const string pathNuevoEnemigo = "Resources/Maldad1.png";

	Texture* pacmanTexture;
	Texture* fantasma1Texture;
	Texture* fantasma2Texture;
	Texture* fantasma3Texture;
	Texture* fantasma4Texture;
	Texture* frutaTexture;
	Texture* monedaTexture;
	Texture* superMonedaTexture;
	Texture* pared1Texture;
	Texture* pared2Texture;
	Texture* pared3Texture;
	Texture* pared4Texture;
	Texture* nuevoEnemigoTexture;

public:
	TextureManager();
	~TextureManager();

	Texture* getTexture(string _key) { return mapTexturas[_key]; }
	void addTexture(string _key, Texture* _texture);
	void free();
};


