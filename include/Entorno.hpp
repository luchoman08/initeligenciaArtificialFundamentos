#ifndef ENTORNO_HPP
#define ENTORNO_HPP
#include <utility>
#include <iostream>
#include <vector>
#include "Actor.hpp"
class Entorno{
	
	
	public:
	void setRepresentacionEntorno(int** nRepresentacion, int filas, int columas);
	
	private:
	/*
	 * Los -1 son obstaculos, los 0 es espacio disponible y los 1 son objetivos, los 2 son actores simples
	 * los 3 son actores con reconocimiento de entorno
	 * bien los objetivos podrian abstraerse a ser de un tipo objeto con multiples
	 * caracteristicas, como por ejemplo cantidad de golpes para destruir,
	 * peso, rozamiento, etc, la matriz bien podria ser ndimencional
	 */
	int** representacionEntorno;
	
	/*
	 * Los objetivos bien podrian estar posicionados en un plano de n dimenciones
	 */
	
	std::vector <Actor> actores;
	int filas;
	int columnas;
};

#endif
