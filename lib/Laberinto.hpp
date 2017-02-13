#include <iostream>
#include <string>
#include <fstream>
/*
 * 
 * la primera linea del fichero dice cuantas filas tiene el entorno, 
 * el segundo cuantas columnas y el resto es la matriz que representa el 
 * entorno
 * 
 */
 
int crearMatrizDinamica(int filas, int columnas, int** &punteroMatriz){
	punteroMatriz = new int* [filas];
				for (int i = 0; i < columnas; i++) {
					punteroMatriz[i] = new int[columnas];
				}
				return 0;
}

int** leerLaberinto(int representacionObstaculo, int representacionObjetivo, int representacionEspacioLibre, std::string nombreFichero){
	
	std::ifstream ficheroEntrada(nombreFichero);
	std::string objetoTemporal;
	int temporalFilas = 0;
	int temporalColumas = 0;
	int** entornoFinal;
	for(int i = 0; !ficheroEntrada.eof(); i++){

		
		switch(i){
			case 0: ficheroEntrada >> objetoTemporal; temporalFilas = stoi(objetoTemporal);break;
			case 1: ficheroEntrada >> objetoTemporal; temporalColumas = stoi(objetoTemporal);break;
			case 3: ficheroEntrada >> objetoTemporal; crearMatrizDinamica(temporalFilas, temporalColumas, entornoFinal);
			
			}
	}
	
}
