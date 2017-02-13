#include "Actor.hpp"

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
bool Actor::libreArriba(Entorno &entorno ){
	if(entorno->representacionEntorno[this->posicion.first, this->posicion.second][]
	};
bool Actor::libreAbajo(){};
bool Actor::libreIzquierda(){};
bool Actor::libreDerecha(){};
