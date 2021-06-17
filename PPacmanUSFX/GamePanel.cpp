#include "GamePanel.h"

GamePanel::GamePanel(Texture* _texture, int _posicionX, int _posicionY): 
	GameObject(_texture, _posicionX, _posicionY)
{
	texto = "Pacman USFX, solo para universitarios.";
}

void GamePanel::render()
{
	TTF_Font* fuente = TTF_OpenFont("BarlowCondensed-BlackItalic.ttf", 15);
	SDL_Color colorFuente = { 255,255,255 };
	textura->loadFromRenderedText(fuente, texto, colorFuente);
	SDL_Rect* cuadroTexto = new SDL_Rect({ 0,0,textura->getAncho(), textura->getAlto() });
	textura->render(posicionX, posicionY, cuadroTexto);
}
