#ifndef ACTOR_HPP
#define ACTOR_HPP
#include <utility>
#include "Config.hpp"
class Entorno;
class Actor{
	
	public: 
	
	Actor(int posicionInicialX, int posicionInicialY);
	void moverseDerecha();
	void moverseIzquierda();
	void moverseArriba();
	void moverseAbajo();
	bool libreArriba(int** &entorno);
	bool libreAbajo(int** &entorno);
	bool libreIzquierda(int** &entorno);
	bool libreDerecha(int** &entorno);
	virtual void decidirDondeMoverse();
	Config* configuracion = new Config();
	private:
	/* x,y  bien podria ser una posicion de n dimenciones*/
	std::pair <int,int> posicion;
};

#endif
