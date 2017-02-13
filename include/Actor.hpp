#ifndef ACTOR_HPP
#define ACTOR_HPP
#include <utility>
#include "Entorno.hpp"
#include "../lib/Laberinto.hpp"
class Actor{
	
	public: 
	
	Actor(int posicionInicialX, int posicionInicialY);
	void moverseDerecha();
	void moverseIzquierda();
	void moverseArriba();
	void moverseAbajo();
	bool libreArriba();
	bool libreAbajo();
	bool libreIzquierda();
	bool libreDerecha();
	virtual void decidirDondeMoverse();
	
	private:
	/* x,y  bien podria ser una posicion de n dimenciones*/
	std::pair <int,int> posicion;
};

#endif
