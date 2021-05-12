#pragma once
#include <iostream>
#include <string>
#include <SDL.h>
#include "GameObject.h"
#include"Texture.h"

using namespace std;

class Fantasma : public GameObject{
private:
	int velocidadX;
	int velocidadY;

	int velocidadPatron;

	int posicionXDestino;
	int posicionYDestino;

	int incrementoPosicionX;
	int incrementoPosicionY;

public:
	// Constructores y destructores
	//Fantasma(string path, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla, int _velocidadPatron);
	Fantasma(Texture* _fantasmaTexture, int _posicionX, int posicionY, int _ancho, int _alto, int anchoPantalla, int altoPantalla, int _velocidadPatron);
	//~Fantasma();

	//MetodosAccesores
	
	int getVelocidadX() { return velocidadX; }
	int getVelocidadY() { return velocidadY; }
	int getVelocidadPatron() { return velocidadPatron; }
	
	void setVelocidadX(int _velocidadX) { velocidadX = _velocidadX; }
	void setVelocidadY(int _velocidadY) { velocidadY = _velocidadY; }
	void setVelocidadPatrton(int _velocidadPatron) { velocidadPatron = _velocidadPatron; }
	
	//Metodos varios
	
	//Manejador de Eventos
	//void handleEvent(SDL_Event& e);
	
	//Mover fantasma
	void move();
	//Renderizar imagen fantasma
	//void render() override;
	// Actualizar datos fantasma
	//void update() override;
};