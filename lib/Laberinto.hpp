#ifnderf LABERINTO_HPP
#define LABERINTO_HPP
#include <iostream>
#include <string>
#include <fstream>
#include "Config.hpp"
/*
 * 
 * la primera linea del fichero dice cuantas filas tiene el entorno, 
 * el segundo cuantas columnas y el resto es la matriz que representa el 
 * entorno
 * 
 */
Config* configuracionMundo = new Config();
bool esActor(int valor){
	bool retorno = (valor == configuracionMundo->getRepresentacionActor())?  true: false;
	return retorno;
	
	
}
bool esObstaculo(int valor){
	bool retorno = (valor == configuracionMundo->getRepresentacionObstaculo())?  true: false;
	return retorno;
}
bool esEspacioVacio(int valor){
	bool retorno = (valor == configuracionMundo->getRepresentacionEspacioVacio())?  true: false;
	return retorno;
}
 bool esObjetivo(int valor){
	bool retorno = (valor == configuracionMundo->getRepresentacionObjetivo())?  true: false;
	return retorno;
}
 
 int imprimirMatrizDinamica(int** punteroMatriz, int numFilas, int numColumnas){
	for(int i = 0; i < numFilas; i++){
		for(int j = 0; j < numColumnas; j++){
			std::cout << punteroMatriz[i][j]  << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
 
int crearMatrizDinamica(int filas, int columnas, int** &punteroMatriz){
	punteroMatriz = new int* [filas];
				for (int i = 0; i < columnas; i++) {
					punteroMatriz[i] = new int[columnas];
				}
				return 0;
}

/*
 * int representacionActor, int representacionObstaculo, int representacionObjetivo, int representacionEspacioLibre, 
 * */

int** leerLaberinto(std::string nombreFichero){
	
	std::ifstream ficheroEntrada(nombreFichero);
	std::string objetoTemporal;
	int temporalFilas = 0;
	int temporalColumas = 0;
	int** entornoFinal;
	for(int i = 0; !ficheroEntrada.eof(); i++){

		
		switch(i){
			case 0: ficheroEntrada >> objetoTemporal; temporalFilas = stoi(objetoTemporal);break;
			case 1: ficheroEntrada >> objetoTemporal; temporalColumas = stoi(objetoTemporal); break;
			case 2: 				
				crearMatrizDinamica(temporalFilas, temporalColumas, entornoFinal);
			default:
			
			for(int k = 0; k < temporalFilas; k++){
				for(int j = 0; j < temporalColumas; j++){
					
					ficheroEntrada >> objetoTemporal;
					std::cout << objetoTemporal << " ";
					entornoFinal[k][j]  = stoi(objetoTemporal);
				}
				std::cout << std::endl;
			
			}
			return entornoFinal;
			
		}
	}
	return entornoFinal;
}


#endif
