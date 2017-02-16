#include "Actor.hpp"
#include "Config.hpp"
Actor::Actor(int posicionInicialX, int posicionInicialY){
	this->posicion.first = posicionInicialX;
	this->posicion.second = posicionInicialY;
	};
void Actor::moverseDerecha(){
	this->posicion.first++;
	};
void Actor::moverseIzquierda(){
	this->posicion.first--;
	};
void Actor::moverseArriba(){
	this->posicion.second++;
	};
void Actor::moverseAbajo(){
	this->posicion.second--;
	};
bool Actor::libreArriba(int** &entorno){
	if(entorno[this->posicion.first][this->posicion.second + 1] == configuracion->getRepresentacionObstaculo())
	return false;
	return true;
	};
bool Actor::libreAbajo(int** &entorno){
	if(entorno[this->posicion.first][this->posicion.second - 1] == configuracion->getRepresentacionObstaculo())
	return false;
	return true;
	};
bool Actor::libreIzquierda(int** &entorno){
	if(entorno[this->posicion.first - 1 ][this->posicion.second] == configuracion->getRepresentacionObstaculo())
	return false;
	return true;
	};
bool Actor::libreDerecha(int** &entorno){
	if(entorno[this->posicion.first + 1][this->posicion.second] == configuracion->getRepresentacionObstaculo())
	return false;
	return true;
	};
