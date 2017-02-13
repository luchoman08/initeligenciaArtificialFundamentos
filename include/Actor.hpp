#ifndef ACTOR_HPP
#define ACTOR_HPP
#include <utility>
class Actor{
	
	public: 
	
	Actor();
	void moverseDerecha();
	void moverseIzquierda();
	void moverseArriba();
	void moverseAbajo();
	virtual void decidirDondeMoverse();
	
	private:
	std::pair <int,int> posicionDentroEntorno;
};

#endif
