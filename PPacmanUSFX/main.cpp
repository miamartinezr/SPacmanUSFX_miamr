#include <iostream>
#include "GameManager.h"
#include "GameObject.h"

#include <vector>

using namespace std;


int main(int argc, char* argv[]) {
    GameManager*  theApp = GameManager::crearInstancia();
   
    return theApp->onExecute();
}
